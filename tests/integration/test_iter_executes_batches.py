from pytsql.tsql import iter_executes_batches
import logging


def test_executes_batches(engine):
    seed = """
    USE [tempdb]
    GO
    DROP TABLE IF EXISTS [test_table_batches]
    CREATE TABLE [test_table_batches] (
        col VARCHAR(3)
    )
    GO
    INSERT INTO [test_table_batches] (col)
    VALUES ('A'), ('AB'), ('ABC')
    PRINT('Affected ' + CAST(@@ROWCOUNT AS VARCHAR) + ' rows')
    """

    for sql, run in iter_executes_batches(seed, engine, None):
        logging.info(sql)
        run()
