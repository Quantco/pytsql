import pkg_resources

from .tsql import execute, executes

try:
    __version__ = pkg_resources.get_distribution(__name__).version
except Exception:
    __version__ = "unknown"

__all__ = ["execute", "executes"]
