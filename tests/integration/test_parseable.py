from antlr4 import InputStream

from pytsql.grammar import parse
from pytsql.tsql import _RaisingErrorListener


def test_bulk_insert():
    stmt = "BULK INSERT tabname FROM '/path/to/file'"
    tree = parse(InputStream(data=stmt), "tsql_file", _RaisingErrorListener())
