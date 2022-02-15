"""Execution of SQL scripts for MSSQL"""
# import pkg_resources

from .tsql import execute, executes

# try:
    # __version__ = pkg_resources.get_distribution(__name__).version
# except Exception:
__version__ = "0.1"

__all__ = ["execute", "executes"]
