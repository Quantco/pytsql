from pytsql import executes


def test_schema_raw(engine):
    executes("CREATE SCHEMA raw;", engine, None)
