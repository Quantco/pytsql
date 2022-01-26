import os
import urllib.parse
from pathlib import Path

import pytest
import sqlalchemy as sa

TEST_DB_NAME = "tempdb"


def get_engine(backend) -> sa.engine.Engine:
    address = os.environ.get("DB_ADDR", "localhost:1433")
    auth = "sa:QuantCo%40MSSQL@" if backend != "mssql-windows-ci" else ""
    connection_string = f"mssql+pyodbc://{auth}{address}/{TEST_DB_NAME}"
    if backend == "mssql-freetds":
        connection_string += "?driver=libtdsodbc.so&tds_version=7.4"
    else:
        msodbc_driver_name = urllib.parse.quote_plus("ODBC Driver 17 for SQL Server")
        connection_string += f"?driver={msodbc_driver_name}"
    return sa.create_engine(connection_string, connect_args={"autocommit": True})


@pytest.fixture(scope="function")
def engine(backend):
    engine = get_engine(backend)
    return engine


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


@pytest.fixture(scope="session", autouse=True)
def setup_odbcsysini():
    os.environ["ODBCSYSINI"] = str(
        Path(os.environ["CONDA_PREFIX"]) / "etc" / "msodbcsql17"
    )
