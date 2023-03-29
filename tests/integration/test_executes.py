from pytsql.tsql import executes


def test_executes_text_with_semicolon(engine):
    seed = """
    CREATE TABLE test_table (
        col_test VARCHAR(10)
    );
    INSERT INTO test_table
    VALUES (':foo')
    """

    executes(seed, engine, None)
