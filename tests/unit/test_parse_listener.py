from unittest.mock import MagicMock

import antlr4.tree.Tree
from antlr4 import InputStream

from pytsql.grammar import parse


def test_parser_listener_called_at_enter_tsql_file():
    seeed = "SELECT * FROM tbl"

    tree = parse(InputStream(data=seeed), "tsql_file")
    walker = antlr4.ParseTreeWalker()
    test_listener = MagicMock()
    walker.walk(test_listener, tree)

    assert test_listener.enterTsql_file.called
