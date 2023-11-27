import pytest
from antlr4 import InputStream

from pytsql.grammar import parse
from pytsql.tsql import _RaisingErrorListener


@pytest.mark.parametrize(
    "statement",
    [
        "BULK INSERT tabname FROM '/path/to/file'",
        # TODO in this PR: add the rest
        (
            """BULK INSERT tabname FROM '/path/to/file' WITH
        ( BATCHSIZE = 1000
         ,TABLOCK
         ,FIELDTERMINATOR = ';',
        )"""
        ),
    ],
)
def test_bulk_insert_doesnt_fail(statement: str):
    parse(InputStream(data=statement), "tsql_file", _RaisingErrorListener())
