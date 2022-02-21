# pytsql

**Description**: `pytsql` allows to run mssql scripts, which are typically run via GUIs, to be executed via CLI instead.
This, in turn, eases concurrent execution, scheduled execution as well as chained execution
of scripts in a workflow. Put differently, it enables automated execution of sql
scripts.

This project is in an early stage. Hence suggestions as well as contributions are very welcome.

## Installation

To install, execute:

```bash
pip install pytsql
```

or in a `conda` environment

```bash
mamba install pytsql
```

Be aware that depending on your platform, you'will need specific drivers ([Windows](https://docs.microsoft.com/en-us/sql/connect/odbc/windows/microsoft-odbc-driver-for-sql-server-on-windows?view=sql-server-ver15), [Linux](https://docs.microsoft.com/en-us/sql/connect/odbc/linux-mac/installing-the-microsoft-odbc-driver-for-sql-server?view=sql-server-ver15), [macOS](https://docs.microsoft.com/en-us/sql/connect/odbc/linux-mac/install-microsoft-odbc-driver-sql-server-macos?view=sql-server-ver15)).

## Usage

`pytsql` is tailored to run with MSSQL. Other sql dialects are not supported.

The main function of interest is `execute`. It requires a `sqlalchemy` [`Engine`][engine]
object as well as the path to a sql script. A typical use case might look as follows:

```python
import pytsql
from sqlalchemy import sa

my_sql_script = "my_sql_script.sql"

db_connection_string = "connection_to_my_database"
engine = sa.get_engine(db_connection_string)

pytsql.execute(my_sql_script, engine)
```

[engine]: https://docs.sqlalchemy.org/en/14/core/engines.html

## Development

We use `conda` to manage the development environment. We strongly suggest to use `mamba` as a replacement for `conda`.

```bash
# Clone the repository
git clone git@github.com:Quantco/pytsql.git
cd pytsql

# Set up a conda environment with name "pytsql" and activate it.
mamba env create
conda activate pytsql

# Set up our pre-commit hooks for black, mypy, isort and flake8.
pre-commit install

# Install this package in editable mode.
pip install --no-build-isolation -e .
```

### Unit tests

```bash
conda activate pytsql
cd pytsql
pytest tests/unit/
```

### Integration tests

Integration tests are run against a database. You can start a local docker-based mssql database configured for the integration tests as follows:

```bash
docker run \
    -e "ACCEPT_EULA=Y" \
    -e "SA_PASSWORD=QuantCo@MSSQL" \
    -p 1433:1433 \
    --name=mssql \
    --rm -it mcr.microsoft.com/mssql/server:2019-latest
```

or in case of running on a ARM based device

```bash
docker run \
    -e "ACCEPT_EULA=Y" \
    -e "MSSQL_SA_PASSWORD=QuantCo@MSSQL" \
    -e "MSSQL_USER=sa" \
    -p 1433:1433 \
    --name=mssql \
    --rm -it mcr.microsoft.com/azure-sql-edge
```

Alternatively, the script at the root level called `start_mssql.sh` can be used in Unix based environments (Linux, OSX, WSL).

Once the docker container is running, run the tests:

```bash
conda activate pytsql
cd pytsql
pytest tests/integration
```

Add the option `--backend=mssql-freetds` to the test command to run the tests using the `freetds` driver.

## How to create a new grammar

The only non auto-generated file in `pytsql/src/pytsql/grammar` is `tsql.g4`. Once you adapted it to your needs, you can generate all other files by running,

`java -jar /usr/local/lib/antlr-4.9.2-complete.jar -Dlanguage=Python3 tsql.g4`

with your a path to your respective antlr jar file.

## Getting help

Please make sure to use github issues in case you run into trouble.

----

## Credits

Inspiration drawn from [codebuff](https://github.com/antlr/codebuff/blob/master/grammars/org/antlr/codebuff/tsql.g4).

Original authors:
[Alex Gonopolskiy](https://github.com/agonopol)
[Kevin Klein](https://github.com/kklein)
[Encho Mishinev](https://github.com/EnchoMishinevQC)
