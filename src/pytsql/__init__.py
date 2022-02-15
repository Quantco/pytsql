"""`Pytsql` allows to run mssql sripts, typically run via GUIs, via CLI."""


from .tsql import execute, executes


__version__ = "0.1"

__all__ = ["execute", "executes"]
