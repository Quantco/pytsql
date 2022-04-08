Usage
=====

``pytsql`` is tailored to run with MSSQL. Other sql dialects are not supported.

The main function of interest is ``execute``. It requires a ``sqlalchemy``
`Engine <https://docs.sqlalchemy.org/en/14/core/engines.html>`_
object as well as the path to a sql script. A typical use case might look as follows:

.. code-block:: python

    import pytsql
    from sqlalchemy import sa

    db_connection_string = "connection_to_my_database"
    engine = sa.get_engine(db_connection_string)

    pytsql.execute("my_sql_script.sql", engine)


Parametrization
---------------

``execute`` has a ``parameters`` parameter. With the help of ``parameters``, values
and expressions in the underlying sql script can be dynamically set.

The way this is done is similar to templating. Yet, most traditional templating
approaches don't allow for the execution of the template source code. We chose an approach
which guarantees executability of a sql script with default values while also allowing for
the replacement of values during execution.

Concretely, a sql script might look as such:

.. code-block:: sql

     USE master;
     /* <replace> */
     select * from [dbo].[table];
     /* </replace> select * from {table_qualifier}; */

If this script is run 'as such', the default table, ``master.dbo.table`` will be selected
from. At the same time, we can parametrize the table which is selected from:

.. code-block:: python

    for table_name in ["table_name1", "table_name2"]:
        parameters = {"table_qualifier": f"different_schema.{table_name}"}
        pytsql.execute(my_sql_script, engine, parameters)


Logging the prints
------------------

When working in sql IDEs or GUIs, some developers seem to use the sql ``PRINT`` function
as a logging or debugging mechanism. We have observed use cases ranging from
``PRINT 'section 4 completed'`` over
``PRINT(CAST(GETDATE() AS VARCHAR) + ': start section 5')`` to printing intermediate
execution information such as how many rows had been affected by a certain operation
or what the mean of a newly created column turned out to be.

If such mechanisms are already in place, ``pytsql`` is able to reuse them. Given that
a python logger has been set up in the script calling ``pytsql.execute``, ``pytsql``
will log the results of any ``PRINT`` statements with level ``INFO``.

