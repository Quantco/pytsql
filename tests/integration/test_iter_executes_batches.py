from pytsql.tsql import iter_executes_batches


def test_executes_batches(engine):
    seed = """
    USE [tempdb]
    GO
    DROP TABLE IF EXISTS [test_table]
    CREATE TABLE [test_table] (
        col VARCHAR(3)
    )
    GO
    INSERT INTO [test_table] (col)
    VALUES ('A'), ('AB'), ('ABC')
    PRINT('Affected ' + CAST(@@ROWCOUNT AS VARCHAR) + ' rows')
    """

    for sql, run in iter_executes_batches(seed, engine, None):
        print(sql)
        run()
