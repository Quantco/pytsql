# pytsql

**Description**: `Pytsql` allows to run mssql sripts, typically run via GUIs, via CLI.
This, in turn, eases concurrent execution, scheduled execution as well as chained execution
of scripts in a worflow. Put differently, it enables automated execution of sql
scripts.

This project is in an early stage. Hence suggestions as well as contributions are very welcome.


## Dependencies

`Pytsql` is tailored to run with MSSQL. Other sql dialects are not supported.
You are only required to use python and `sqlalchemy` to connect to your database.

Some of the commands below will require additional prerequisites:
* Java runtime (JRE)
* Docker runtime

[pre-commit]: https://pre-commit.com/
[antlr]: https://pypi.org/project/antlr4-python3-runtime/

## Installation

To install, execute:

```bash
conda install pytsql
```

## Usage

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

## How to test the software

### Unit tests

```bash
conda activate pytsql
cd pytsql
pytest tests/unit/
```

### Integration tests
Integration tests are run against a database. For that matter, start a local mssql database first:
```bash
cd pytsql
./start_mssql
```

Once the docker container is running, run the tests:
```bash
conda activate pytsql
cd pytsql
pytest tests/integration --backend=mssql-freetds
```

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
