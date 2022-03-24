Usage
=====

``pytsql`` is tailored to run with MSSQL. Other sql dialects are not supported.

The main function of interest is ``execute``. It requires a ``sqlalchemy``
`Engine <https://docs.sqlalchemy.org/en/14/core/engines.html>`_
object as well as the path to a sql script. A typical use case might look as follows:

.. code-block:: python

    import pytsql
    from sqlalchemy import sa

    my_sql_script = "my_sql_script.sql"

    db_connection_string = "connection_to_my_database"
    engine = sa.get_engine(db_connection_string)

    pytsql.execute(my_sql_script, engine)

