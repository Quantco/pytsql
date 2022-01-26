from pytsql.tsql import _split

from .helpers import assert_strings_equal_disregarding_whitespace


def test_declaration_in_control_flow():
    seed = """
    IF 1 = 1
        DECLARE @A INT = 5
    SELECT * FROM x
    """
    splits = _split(seed)
    assert len(splits) == 2

    assert_strings_equal_disregarding_whitespace(
        splits[0], "IF 1 = 1 DECLARE @A INT = 5"
    )
    assert_strings_equal_disregarding_whitespace(
        splits[1],
        """
        DECLARE @A INT = 5
        SELECT * FROM x
        """,
    )


def test_dont_append_dynamics_on_create_schema():
    seed = """
        DECLARE @A INT = 5
        CREATE SCHEMA s
        SELECT * FROM x
        """
    splits = _split(seed)
    assert len(splits) == 3

    assert splits[0] == "DECLARE @A INT = 5"
    assert splits[1] == "CREATE SCHEMA s"
    assert_strings_equal_disregarding_whitespace(
        splits[2],
        """
        DECLARE @A INT = 5
        SELECT * FROM x
        """,
    )
