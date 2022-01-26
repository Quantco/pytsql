import pytest

from pytsql.tsql import _split

from .helpers import assert_strings_equal_disregarding_whitespace


def test_ignore_go_inside_quoted_text():
    seed = """DECLARE @td            VARCHAR(20)   = CONVERT(VARCHAR, GETDATE(), 112);
DECLARE @dynamic       VARCHAR(8000) = '
CREATE DATABASE ' + @database_name +'
ON
( NAME = ' + @database_name +',
FILENAME = ''D:\\Microsoft SQL Server\\MSSQL13.MSSQLSERVER\\MSSQL\\DATA\' + @td +'_' + @database_name + '.mdf'',
SIZE = 1GB,
MAXSIZE = UNLIMITED,
FILEGROWTH = 100MB )
LOG ON
( NAME = ' + @database_name +'_log,
FILENAME = ''D:\\Microsoft SQL Server\\MSSQL13.MSSQLSERVER\\MSSQL\\DATA\' + @td +'_' + @database_name + '_log.ldf'',
SIZE = 10MB,
MAXSIZE = UNLIMITED,
FILEGROWTH = 10MB );'
;
SELECT(@dynamic)
EXEC(@dynamic)
"""
    splits = _split(seed)
    td_declare = (
        "DECLARE @td VARCHAR ( 20 ) = CONVERT ( VARCHAR , GETDATE ( ) , 112 ) ;"
    )
    assert_strings_equal_disregarding_whitespace(splits[0], td_declare)
    dynamic_declare = """
        DECLARE @dynamic       VARCHAR ( 8000 )  = '
        CREATE DATABASE ' + @database_name + '
        ON
        ( NAME = ' + @database_name + ',
        FILENAME = ''D:\\Microsoft SQL Server\\MSSQL13.MSSQLSERVER\\MSSQL\\DATA\' + @td + '_' + @database_name + '.mdf'',
        SIZE = 1GB,
        MAXSIZE = UNLIMITED,
        FILEGROWTH = 100MB )
        LOG ON
        ( NAME = ' + @database_name + '_log,
        FILENAME = ''D:\\Microsoft SQL Server\\MSSQL13.MSSQLSERVER\\MSSQL\\DATA\' + @td + '_' + @database_name + '_log.ldf'',
        SIZE = 10MB,
        MAXSIZE = UNLIMITED,
        FILEGROWTH = 10MB );'
        ;"""
    assert_strings_equal_disregarding_whitespace(
        splits[1], " ".join([td_declare, dynamic_declare])
    )
    assert_strings_equal_disregarding_whitespace(
        splits[2], " ".join([td_declare, dynamic_declare, "SELECT ( @dynamic )"])
    )
    assert_strings_equal_disregarding_whitespace(
        splits[3], " ".join([td_declare, dynamic_declare, "EXEC ( @dynamic )"])
    )


def test_select_concat():
    seed = """
DECLARE @timestamp_started  DATETIME  = CURRENT_TIMESTAMP;
-- step 0: deduce associated nr's
DROP TABLE IF EXISTS #temporary;
CREATE TABLE #temporary (
    nr      VARCHAR(17)   NOT NULL
  , short_nr         SMALLINT NOT NULL
  , min_nr_date     DATE     NOT NULL
  , iter        TINYINT  NOT NULL -- iterator
  , PRIMARY KEY (nr, min_date, iter)
);
PRINT(CAST(GETDATE() AS VARCHAR) + ': INSERT INTO #temporary')
INSERT INTO #temporary WITH(TABLOCK)
SELECT CONCAT('0', nr) nr
     , short_nr
     , MIN(nr_date) min_nr_date
     , ROW_NUMBER() OVER(PARTITION BY nr, MIN(nr_date) ORDER BY short_nr DESC) -- very few instances where this matters
FROM otherdb.dbo.othertable WITH(NOLOCK)
WHERE kind = 1
GROUP BY nr, short_nr;"""
    assert len(_split(seed)) == 5


def test_insert_select_from():
    seed = """
INSERT INTO #temporary WITH(TABLOCK)
SELECT o.nr
     , o.nr19
     , COALESCE(i1.short_nr, i2.short_nr, i_help1.short_nr, i_help2.short_nr) short_nr
     , COALESCE(i1.min_valid_from, i2.min_valid_from, i_help1.date_change, i_help2.date_change) min_valid_from_date
FROM (
  SELECT CONCAT('0', Nr) nr
       , nr19
       , MIN(VALID_FROM) min_valid_from
       , ROW_NUMBER() OVER(PARTITION BY Nr, MIN(VALID_FROM) ORDER BY COUNT(distinct VALID_FROM) DESC, nr19) iter
  FROM otherdb.dbo.history WITH(NOLOCK)
  CROSS APPLY ( VALUES (
    CASE LEFT(NR_PROZEDUR, 1) WHEN '5' THEN LEFT(NR_PROZEDUR, 6) + SUBSTRING(NR_PROZEDUR, 9, 13)
    ELSE LEFT(NR_PROZEDUR, 19) END
  )) nr(nr19)
  GROUP BY Nr, nr19
) o
LEFT JOIN (
  SELECT CONCAT('0', Nr ) nr
       , nr19
       , MIN(ISNULL(DATUM_LETZTER_FACHL_AEND, VALID_FROM)) date_change
       , ROW_NUMBER() OVER(PARTITION BY Nr, MIN(VALID_FROM) ORDER BY COUNT(distinct VALID_FROM) DESC, nr19) iter
  FROM otherdb.dbo.history WITH(NOLOCK)
  CROSS APPLY ( VALUES (
    CASE LEFT(NR_PROZEDUR, 1) WHEN '5' THEN LEFT(NR_PROZEDUR, 6) + SUBSTRING(NR_PROZEDUR, 9, 13)
    ELSE LEFT(NR_PROZEDUR, 19) END
  )) nr(nr19)
  WHERE drg <> ''
  GROUP BY Nr, nr19
) o_help
  ON  o.nr = o_help.nr
  AND o.nr19    = o_help.nr19
LEFT JOIN #temporary2Valid_From i1
  ON  o.nr = i1.nr
  AND o.min_valid_from   = i1.min_valid_from
  AND o.iter     = i1.iter
LEFT JOIN #temporary2Valid_From i2
  ON  o.nr = i2.nr
  AND o.min_valid_from   = i2.min_valid_from
  AND 1          = i2.iter
LEFT JOIN #temporary2Valid_From_help i_help1
  ON  o_help.nr    = i_help1.nr
  AND o_help.date_change = i_help1.date_change
  AND o_help.iter        = i_help1.iter
LEFT JOIN #temporary2Valid_From_help i_help2
  ON  o_help.nr    = i_help2.nr
  AND o_help.date_change = i_help2.date_change
  AND 1                  = i_help2.iter
WHERE COALESCE(i1.short_nr, i2.short_nr, i_help1.short_nr, i_help2.short_nr) IS NOT NULL;"""
    assert len(_split(seed)) == 1


def test_create_index_include_short():
    seed = """USE new_db
GO

/*
Create indices
*/
CREATE NONCLUSTERED INDEX output_index_1
ON [sim].[output1] ([chain])
INCLUDE ([id],[year],[iter])
GO

CREATE NONCLUSTERED INDEX output_index_2
ON [dbo].[output2] ([chain])
INCLUDE ([id],[year],[iter],[iter2],[iter3])
GO
"""
    assert len(_split(seed)) == 3


def test_value_table_selection():
    seed = """INSERT INTO mytable SELECT * FROM ( VALUES (133713371337), (133713371338) ) t(id); GO"""
    actual = _split(seed)
    expected = """INSERT INTO mytable SELECT * FROM ( VALUES ( 133713371337 ) , ( 133713371338 ) ) t ( id ) ;"""
    assert len(actual) == 1
    assert_strings_equal_disregarding_whitespace(actual[0], expected)


def test_select_from():
    seed = """
SELECT CONCAT('0', Nr) nr
       , nr19
       , MIN(VALID_FROM) min_valid_from
       , ROW_NUMBER() OVER(PARTITION BY Nr, MIN(VALID_FROM) ORDER BY COUNT(distinct VALID_FROM) DESC, nr19) iter
  FROM otherdb.dbo.history WITH(NOLOCK)
  CROSS APPLY ( VALUES (
    CASE LEFT(NR_PROZEDUR, 1) WHEN '5' THEN LEFT(NR_PROZEDUR, 6) + SUBSTRING(NR_PROZEDUR, 9, 13)
    ELSE LEFT(NR_PROZEDUR, 19) END
  )) nr(nr19)
  GROUP BY Nr, nr19
"""
    assert len(_split(seed)) == 1


def test_create_index_include():
    seed = """IF NOT
    (
        SELECT MIN(ENGBE/ENA)         -- Awesome comment.
        FROM dbo.output WITH(NOLOCK)
        WHERE LEFT(code, 4) = 'code20' -- case-specific codes start with code20.
    )
    >
    (
        SELECT unspecified_engbe_placeholder - epsilon
        FROM dbo.vars WITH(NOLOCK)
    )
  AND
    (
        SELECT MAX(ENGBE/ENA)         -- More comment.
        FROM dbo.output WITH(NOLOCK)
        WHERE LEFT(code, 4) = 'code20' -- case-specific codes start with code20.
    )
    <
    (
        SELECT unspecified_engbe_placeholder + epsilon
        FROM dbo.vars WITH(NOLOCK)
    )
BEGIN
    RAISERROR('Inconsistent placeholder ', 18, 16)
    RETURN
END
"""
    assert len(_split(seed)) == 1


def test_redundant_go():
    seed = """
        GO
        DROP TABLE IF EXISTS dbo.mytable
        GO
    """
    assert len(_split(seed)) == 1


def test_scalar_functions():
    seed = """ SELECT SQRT(SQUARE(SIGN(LOG((EXP(3/0.4))))))
    FROM table2;
    """
    assert len(_split(seed)) == 1


def test_synonym_drop():
    seed = """
    DROP SYNONYM IF EXISTS hax
    DROP SYNONYM IF EXISTS dirty.hax"""
    assert len(_split(seed)) == 2


def test_synonym_create():
    seed = """
    CREATE SYNONYM hax FOR dirty.hax;
    CREATE SYNONYM dirty.hax FOR leet.hax;
    """
    assert len(_split(seed)) == 2


def test_foreign_key():
    seed = """
    CREATE TABLE dbo.mytable (
    id BIGINT NOT NULL
    otherid BIGINT NOT NULL
    , PRIMARY KEY (id, otherid)
    , FOREIGN KEY (otherid) REFERENCES dbo.othertable(id)
);
"""
    assert len(_split(seed)) == 1


def test_parser_error():
    with pytest.raises(ValueError):
        _split("USEE master")


def test_lexer_error():
    with pytest.raises(ValueError):
        _split("USE ?")


def test_go_as_alias():
    with pytest.raises(ValueError):
        _split("SELECT * FROM (VALUES(1)) AS GO(go)")


def test_xml_value():
    seed = """
    SELECT my_id
         , STUFF((
                     SELECT ', ' + other_table.display
                     FROM other_table
                     WHERE other_table.my_id = my_table.my_id
                     ORDER BY other_table.iter
                     FOR XML PATH(''),TYPE
                 ).value('(./text())[1]', 'VARCHAR(MAX)'), 1, 2,
                 '') eps
    -- type conversion via .value, remove 2 char at position 1 via STUFF to strip leading delimiter
    FROM my_table
    GROUP BY my_table.my_id
    """
    _split(seed)


def test_xml_methods():
    seed = """
    DECLARE @myDoc XML
    SELECT @myDoc.query('XQuery')
    SELECT @myDoc.value('XQuery', 'int')
    SELECT @myDoc.exist('XQuery')
    SELECT @myDoc.nodes('XQuery') AS T(C)
    """
    _split(seed)


def test_non_xml_method():
    seed = """
    DECLARE @myDoc XML
    SELECT @myDoc.fakemethod('param')
    """
    with pytest.raises(ValueError):
        _split(seed)
