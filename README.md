# pytsql

[![CI](https://github.com/Quantco/pytsql/workflows/CI/badge.svg)](https://github.com/Quantco/pytsql/actions)
[![Documentation Status](https://readthedocs.org/projects/pytsql/badge/?version=latest)](https://pytsql.readthedocs.io/en/latest/?badge=latest)
[![Conda-forge](https://img.shields.io/conda/vn/conda-forge/pytsql?logoColor=white&logo=conda-forge)](https://anaconda.org/conda-forge/pytsql)
[![PypiVersion](https://img.shields.io/pypi/v/pytsql.svg?logo=pypi&logoColor=white)](https://pypi.org/project/pytsql)


`pytsql` allows to run mssql scripts, typically run from GUIs, from Python.

This, in turn, eases concurrent, scheduled and chained execution of scripts in a
workflow. Put differently, it enables automated execution of Microsoft sql server scripts.

Moreover, `pytsql` supports parametrization of scripts, akin to templating.

Please have a look at our [documentation](https://pytsql.readthedocs.io/en/latest/?badge=latest) if you're curious about more details.

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
object as well as the path to the sql script of interest. A typical use case might look as follows:

```python
import pytsql
from sqlalchemy import sa

db_connection_string = "connection_to_my_database"
engine = sa.get_engine(db_connection_string)

pytsql.execute("my_sql_script.sql", engine)
```

Please also have a look at our documentation sections on [usage](https://pytsql.readthedocs.io/en/latest/usage.html#parametrization) and
[development](https://pytsql.readthedocs.io/en/latest/development.html).

[engine]: https://docs.sqlalchemy.org/en/14/core/engines.html


## Credits

Inspiration drawn from [codebuff](https://github.com/antlr/codebuff/blob/master/grammars/org/antlr/codebuff/tsql.g4).

Original authors:
[Alex Gonopolskiy](https://github.com/agonopol)
[Kevin Klein](https://github.com/kklein)
[Encho Mishinev](https://github.com/EnchoMishinevQC)
