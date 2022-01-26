from typing import Optional

import pytest
import sqlalchemy as sa
from sqlalchemy.engine import Engine
from sqlalchemy.exc import ProgrammingError

from pytsql.tsql import executes


def test_multiple_statements_middle_should_break_due_to_existing_table(engine):
    seed = """
USE [tempdb]

DROP TABLE IF EXISTS [test_table];

CREATE TABLE [test_table] (
col VARCHAR(3)
)
CREATE TABLE [test_table] (
col VARCHAR(3)
)
INSERT INTO [test_table]
SELECT 'ok';
GO

DROP TABLE IF EXISTS [test_table];
GO
    """
    with pytest.raises(
        ProgrammingError,
        match="There is already an object named 'test_table' in the database.",
    ):
        executes(seed, engine, None)


def test_failing_insertion(engine):
    seed = """
USE master;
DROP TABLE IF EXISTS test_table;
CREATE TABLE test_table (
    col_test VARCHAR(3)
);
INSERT INTO test_table
SELECT 'string causing a silent failure'
GO
    """
    with pytest.raises(
        ProgrammingError, match="String or binary data would be truncated"
    ):
        executes(seed, engine, None)


def test_multiple_statements_with_spurius_go(engine):
    statement = """
USE tempdb
GO
DROP TABLE IF EXISTS test_schema.test_table
DROP schema IF EXISTS test_schema
CREATE schema test_schema
GO
CREATE TABLE test_schema.test_table (
 id BIGINT NOT NULL PRIMARY KEY
)
INSERT INTO test_schema.test_table WITH(TABLOCKX)
SELECT *
FROM (
 VALUES (123)
) a(id)
GO
    """
    executes(statement, engine, None)

    table = get_table(engine, "test_table", "test_schema")
    assert len(table.primary_key.columns) == 1
    assert "id" in table.primary_key.columns
    assert str(table.columns["id"].type) == "BIGINT"

    with engine.connect() as conn:
        res = conn.execute("SELECT * FROM test_schema.test_table")
        rows = res.all()
        assert len(rows) == 1
        assert len(rows[0]) == 1
        assert rows[0][0] == 123


def test_primary_key_creation(engine):
    statement = """
    DROP DATABASE IF EXISTS primary_key_creation
    CREATE DATABASE primary_key_creation
    USE primary_key_creation
GO

/****** Object:  Table [dbo].[table1]    Script Date: 2/23/2021 2:48:02 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[table2](
    [nr] [varchar](17) NOT NULL,
    [valid_from] [date] NOT NULL,
    [load_date] [date] NOT NULL,
PRIMARY KEY NONCLUSTERED
(
    [nr] ASC,
    [valid_from] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO"""
    executes(statement, engine, None)

    table = get_table(engine, "table2", "primary_key_creation.dbo")
    assert len(table.primary_key.columns) == 2
    assert "nr" in table.primary_key.columns
    assert "valid_from" in table.primary_key.columns
    assert "VARCHAR(17)" in str(table.columns["nr"].type)
    assert str(table.columns["valid_from"].type) == "DATE"
    assert str(table.columns["load_date"].type) == "DATE"


def test_multiple_uses(engine):
    seed = """
    DROP DATABASE IF EXISTS test_database
    DROP TABLE IF EXISTS master.dbo.table2
    DROP TABLE IF EXISTS master.dbo.table3
    CREATE DATABASE test_database
    USE test_database
    CREATE TABLE dbo.table1 (
        col_test VARCHAR(3)
    ) -- Created into test_database

    USE master
    CREATE TABLE dbo.table2 (
        col_test VARCHAR(3)
    ) -- Created into master

    CREATE TABLE dbo.table3 (
        col_test VARCHAR(3)
    ) -- Created into master because that's the last USE stmt

    CREATE TABLE test_database.dbo.table4(
        col_test VARCHAR(3)
    ) -- Created into test_database because the db is qualified
    GO
    """
    executes(seed, engine, None)

    master_names = sa.inspect(engine).get_table_names(schema="dbo")
    test_database_names = sa.inspect(engine).get_table_names(schema="test_database.dbo")

    assert "table2" in master_names
    assert "table3" in master_names
    assert "table1" in test_database_names
    assert "table4" in test_database_names


def get_table(
    engine: Engine, table_name: str, schema: Optional[str] = None
) -> sa.Table:
    return sa.Table(table_name, sa.MetaData(), autoload_with=engine, schema=schema)
