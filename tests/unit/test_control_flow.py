import pytest

from pytsql.tsql import _split

from .helpers import assert_strings_equal_disregarding_whitespace


@pytest.mark.parametrize(
    "seed",
    [
        """
        IF OBJECT_ID ( 'test' , 'V' ) IS NOT NULL
        DROP VIEW test""",
        """
        IF DATENAME ( weekday , GETDATE ( ) ) IN ( 'Saturday' , 'Sunday' )
            SELECT 'Weekend' ;
        ELSE
            SELECT 'Weekday' ;""",  # noqa: W291
        """
        IF OBJECT_ID ( 'test' , 'V' ) IS NOT NULL
            IF DATENAME ( weekday , GETDATE ( ) ) IN ( N'Saturday' , N'Sunday' )
                SELECT 'Weekend' ;
            ELSE
                SELECT 'Weekday' ;""",  # noqa: W291
        """
        WHILE OBJECT_ID ( 'test' , 'V' ) IS NOT NULL
        DROP VIEW test""",  # noqa: W291
        """
        WHILE 8 % 2 = 0
            IF 4 % 2 = 0
                SELECT ( 'HI' )
            ELSE
                SELECT ( 'HO' )
        """,  # noqa: W291
    ],
)
def test_control_flow(seed):
    splits = _split(seed)
    assert len(splits) == 1
    assert_strings_equal_disregarding_whitespace(splits[0], seed)
