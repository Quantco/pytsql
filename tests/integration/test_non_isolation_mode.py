import logging

from pytsql import executes


def test_rowcount(engine, caplog):
    caplog.set_level(logging.INFO)

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

    executes(seed, engine, isolate_top_level_statements=False)

    assert "Affected 3 rows" in caplog.text


def test_semi_persistent_set(engine, caplog):
    caplog.set_level(logging.INFO)

    seed = """
    DECLARE @A INT = 12
    DECLARE @B INT = 34
    SET @A = 56
    SET @B = 78
    PRINT(@A)
    GO
    PRINT(@B)
    """

    executes(seed, engine, isolate_top_level_statements=False)

    assert "56" in caplog.text
    assert "34" in caplog.text
    assert "12" not in caplog.text
    assert "78" not in caplog.text
