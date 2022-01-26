import logging

from pytsql.tsql import _split

from .helpers import assert_strings_equal_disregarding_whitespace

LOGGER = logging.getLogger(__name__)


def test_top_level_print():
    seed = """
    SELECT TOP 10 * FROM my_table;
    PRINT 'text';
    SELECT TOP 10 * FROM my_table2;
    """

    splits = _split(seed)

    assert splits == [
        "SELECT TOP 10 * FROM my_table ;",
        "INSERT INTO #pytsql_prints VALUES ( LEFT ( 'text' , 2000 ) ) ;",
        "SELECT TOP 10 * FROM my_table2 ;",
    ]


def test_prints_in_control_flow():
    seed = """
    DECLARE @A INT = 4
    IF 1 = 1
    BEGIN
        PRINT(2 + 2)
        PRINT @A
    END
    """.strip()

    expected = """
    DECLARE @A INT = 4
    IF 1 = 1
        BEGIN
            INSERT INTO #pytsql_prints VALUES ( LEFT ( ( 2 + 2 ) , 2000 ) ) ;
            INSERT INTO #pytsql_prints VALUES ( LEFT ( @A , 2000 ) ) ;
        END
    """.strip()

    splits = _split(seed)

    assert len(splits) == 2
    assert_strings_equal_disregarding_whitespace(splits[1], expected)
