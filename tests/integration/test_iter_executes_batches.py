import sqlalchemy as sa

from pytsql.tsql import iter_executes_batches


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
    batches = []
    for sql, run in iter_executes_batches(seed, engine, None):
        run()
        batches.append(sql)

    assert len(batches) == 5
    assert "USE [tempdb]" in batches[0]

    with engine.connect() as conn:
        result = conn.execute(sa.text("SELECT COUNT(*) FROM test_table_batches"))
        count = result.scalar()
        assert count == 3
