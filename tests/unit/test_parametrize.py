import pytest

from pytsql.tsql import _parametrize


def test_replace_comment():
    seed = """
/* <replace> */
select a
    , b
    , c
from
    x
/* </replace> select {alpha},b,{charlie} from x */
    """  # noqa: W291
    expected = """select first,b,second from x"""
    assert _parametrize(seed, {"alpha": "first", "charlie": "second"}) == expected


def test_replace_comment_second():
    seed = """
USE master;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from [master].[dbo].[{tableName}]; */
    """
    expected = """USE master;
select * from [master].[dbo].[new_table];"""
    assert _parametrize(seed, {"tableName": "new_table"}) == expected


def test_replace_comment_int():
    seed = """
USE master;
/* <replace> */
select top 42 * from [master].[dbo].[table];
/* </replace> select top {n_rows} * from [master].[dbo].[table]; */
    """
    expected = """USE master;
select top 1337 * from [master].[dbo].[table];"""
    assert _parametrize(seed, {"n_rows": 1337}) == expected


def test_replace_comment_class():
    class MyClass:
        def __init__(self, my_table: str):
            self.my_table = my_table

        def __str__(self):
            return "master.dbo." + self.my_table

    seed = """
USE master;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from {table_qualifier}; */
    """
    expected = """USE master;
select * from master.dbo.table;"""
    assert _parametrize(seed, {"table_qualifier": MyClass("table")}) == expected


def test_none_replacement():
    seed = """
USE master;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from [master].[dbo].[{tableName}]; */
    """
    with pytest.raises(ValueError):
        _parametrize(seed, {"tableName": None})


def test_double_replacement():
    seed = """
USE master;
SELECT * 
FROM dbo./* <replace> */table/* </replace>{tableName} */ t1
JOIN dbo./* <replace> */table/* </replace>{tableName} */ t2
ON t1.id = t2.id;
"""  # noqa: W291
    expected = """USE master;
SELECT *
FROM dbo.new_table t1
JOIN dbo.new_table t2
ON t1.id = t2.id;"""  # noqa: W291
    assert _parametrize(seed, {"tableName": "new_table"}) == expected


def test_multiline_replacement():
    seed = """
USE master;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from [master].[dbo].[{tableName}]; */
    """
    expected = """USE master;
select * from [master].[dbo].[new_table];"""
    assert _parametrize(seed, {"tableName": "new_table"}) == expected


def test_multi_multiline_replacements():
    seed = """
USE master;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from [master].[dbo].[{tableName}]; */
USE newTable;
/* <replace> */
select * from [master].[dbo].[table];
/* </replace> select * from [master].[dbo].[{otherTable}]; */
    """  # noqa: W291
    expected = """USE master;
select * from [master].[dbo].[new_table];
USE newTable;
select * from [master].[dbo].[second_table];"""  # noqa: W291
    assert (
        _parametrize(seed, {"tableName": "new_table", "otherTable": "second_table"})
        == expected
    )


def test_regular_comment_stays():
    seed = """
USE master; /* this is a regular comment */
select * from [master].[dbo].[table];
    """
    expected = """USE master; /* this is a regular comment */
select * from [master].[dbo].[table];"""
    assert _parametrize(seed, {"branch": "new_master"}) == expected


def test_unknown_parameter_exception():
    seed = """
/* <replace> */
USE master;
/* </replace> USE {randomTable}; */
select * from [master].[dbo].[table];
    """
    with pytest.raises(KeyError):
        _parametrize(seed, {"key": "value"})


def test_same_line_replacement():
    seed = """
select a,b,/* <replace> */c/* </replace>{otherC} */ from x
    """
    expected = """select a,b,newC from x"""
    assert _parametrize(seed, {"otherC": "newC"}) == expected


def test_multi_same_line_replacements():
    seed = """
SELECT /* <replace> */a/* </replace>{newA} */, /* <replace> */b/* </replace>{newB} */
FROM table;
    """
    expected = """SELECT newA, newB
FROM table;"""
    assert _parametrize(seed, {"newA": "newA", "newB": "newB"}) == expected


def test_replace_in_string_literal():
    seed = """SELECT '/* <replace> */a/* </replace>{newA} */'"""
    assert _parametrize(seed, {"newA": "newA"}) == "SELECT 'newA'"


def test_custom_replace_keywords():
    seed = """
    SELECT a,/* <replace> */b/* </replace>{otherB} */,/* *repl_start* */c/* *repl_end*{otherC} */ FROM x
        """
    expected = """SELECT a,/* <replace> */b/* </replace>{otherB} */,newC FROM x"""
    assert (
        _parametrize(
            seed,
            {"otherB": "newB", "otherC": "newC"},
            start="*repl_start*",
            end="*repl_end*",
        )
        == expected
    )
