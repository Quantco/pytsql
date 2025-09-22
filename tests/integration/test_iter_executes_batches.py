from pytsql.tsql import iter_executes_batches


def test_executes_batches(engine):
    seed = """
    CREATE TABLE test_table (
        col_test VARCHAR(10)
    );
    INSERT INTO test_table
    VALUES (':foo')
    """

    for sql, run in iter_executes_batches(seed, engine, None):
        print(sql)
        run()
