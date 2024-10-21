"""`Pytsql` allows to run mssql sripts, typically run via GUIs, via CLI."""

import importlib.metadata
import warnings

from .tsql import execute, executes

try:
    __version__ = importlib.metadata.version(__name__)
except importlib.metadata.PackageNotFoundError as e:  # pragma: no cover
    warnings.warn(f"Could not determine version of {__name__}\n{e!s}", stacklevel=2)
    __version__ = "unknown"


__all__ = ["execute", "executes"]
