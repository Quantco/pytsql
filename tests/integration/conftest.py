import os
import urllib.parse

import pytest
import sqlalchemy as sa

TEST_DB_NAME = "tempdb"


def get_engine(backend) -> sa.engine.Engine:
    address = os.environ.get("DB_ADDR", "localhost")
    # auth = "sa:QuantCo%40MSSQL@" if backend != "mssql-windows-ci" else ""
    connection_string = (
        f"mssql+pyodbc://sa:pytsql-Test-123@{address}:1433/{TEST_DB_NAME}"
    )
    if backend == "mssql-freetds":
        connection_string += "?driver=libtdsodbc.so&tds_version=7.4"
    else:
        msodbc_driver_name = urllib.parse.quote_plus("ODBC Driver 17 for SQL Server")
        connection_string += f"?driver={msodbc_driver_name}"
    return sa.create_engine(
        connection_string, connect_args={"autocommit": True, "timeout": 10}
    )


@pytest.fixture(scope="function")
def engine(backend):
    yield get_engine(backend)


def pytest_addoption(parser):
    parser.addoption(
        "--backend",
        choices=("mssql", "mssql-freetds", "mssql-windows-ci"),
        help="which database backend to use to run the integration tests",
    )


def pytest_generate_tests(metafunc):
    if "backend" in metafunc.fixturenames:
        metafunc.parametrize(
            "backend", [metafunc.config.getoption("backend")], scope="module"
        )
