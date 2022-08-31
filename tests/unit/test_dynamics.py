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
        CREATE VIEW y AS SELECT 1
        """
    splits = _split(seed)
    assert len(splits) == 4

    assert splits[0] == "DECLARE @A INT = 5"
    assert splits[1] == "CREATE SCHEMA s"
    assert_strings_equal_disregarding_whitespace(
        splits[2],
        """
        DECLARE @A INT = 5
        SELECT * FROM x
        """,
    )
    assert splits[3] == "CREATE VIEW y AS SELECT 1"


def test_dynamics_no_isolation():
    seed = """
    DECLARE @A INT = 5
    SELECT @A
    GO
    SELECT @A
    """
    splits = _split(seed, isolate_top_level_statements=False)
    assert len(splits) == 2
    assert_strings_equal_disregarding_whitespace(
        splits[0],
        """
        DECLARE @A INT = 5
        SELECT @A
        """,
    )
    assert_strings_equal_disregarding_whitespace(
        splits[1],
        """
        DECLARE @A INT = 5
        SELECT @A
        """,
    )
