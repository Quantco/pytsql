import inspect
import re
from typing import List
from unittest import mock

import pytest
from antlr4 import InputStream, ParserRuleContext
from antlr4.Token import CommonToken
from antlr4.tree.Tree import TerminalNodeImpl

from pytsql.grammar import sa_tsql
from pytsql.tsql import _split


@pytest.fixture
def seed():
    return """
DECLARE @timestamp_started  DATETIME  = CURRENT_TIMESTAMP;
-- step 0: deduce associated nr's
DROP TABLE IF EXISTS #temporary;
CREATE TABLE #temporary (
    nr      VARCHAR(17)   NOT NULL
  , short_nr         SMALLINT NOT NULL
  , min_nr_date     DATE     NOT NULL
  , iter        TINYINT  NOT NULL -- iterator
  , PRIMARY KEY (nr, min_date, iter)
);
PRINT(CAST(GETDATE() AS VARCHAR) + ': INSERT INTO #temporary')
INSERT INTO #temporary WITH(TABLOCK)
SELECT CONCAT('0', nr) nr
     , short_nr
     , MIN(nr_date) min_nr_date
     , ROW_NUMBER() OVER(PARTITION BY nr, MIN(nr_date) ORDER BY short_nr DESC) -- very few instances where this matters
FROM otherdb.dbo.othertable WITH(NOLOCK)
WHERE kind = 1
GROUP BY nr, short_nr;"""


def get_rule_labels(context_cls: ParserRuleContext) -> List[str]:
    init_func = context_cls.__init__

    # Detect any context/token labels from the init function's assignments
    lines, _ = inspect.getsourcelines(init_func)
    labels = []
    for line in lines:
        m = re.match(r"self\.(\w+)\s*=\s*None", line.strip())
        if m:
            labels.append(m.group(1))

    return labels


def compare_common_token(py_token: CommonToken, cpp_token: CommonToken) -> None:
    assert type(py_token) == type(cpp_token)
    if py_token is None:
        return
    assert py_token.type == cpp_token.type
    assert py_token.channel == cpp_token.channel
    assert py_token.start == cpp_token.start
    assert py_token.stop == cpp_token.stop
    assert py_token.tokenIndex == cpp_token.tokenIndex
    assert py_token.line == cpp_token.line
    assert py_token.column == cpp_token.column
    assert py_token.text == cpp_token.text
    assert py_token.getInputStream() is cpp_token.getInputStream()


def compare_terminal_node(
    py_terminal_node: TerminalNodeImpl, cpp_terminal_node: TerminalNodeImpl
) -> None:
    assert type(py_terminal_node) is type(cpp_terminal_node)
    assert type(py_terminal_node.symbol) is type(cpp_terminal_node.symbol)  # noqa: E721

    compare_common_token(py_terminal_node.symbol, cpp_terminal_node.symbol)


def compare_context(
    py_context: ParserRuleContext, cpp_context: ParserRuleContext
) -> None:
    assert type(py_context) == type(cpp_context)
    assert len(py_context.children) == len(cpp_context.children)

    # Validate children
    for i in range(len(py_context.children)):
        if isinstance(py_context.children[i], TerminalNodeImpl):
            compare_terminal_node(py_context.children[i], cpp_context.children[i])
        elif isinstance(py_context.children[i], ParserRuleContext):
            compare_context(py_context.children[i], cpp_context.children[i])
        else:
            raise TypeError(f"Unexpected node type: {py_context.children[i]}")
        assert py_context.children[i].parentCtx is py_context
        assert cpp_context.children[i].parentCtx is cpp_context

    # Validate labels
    for label in get_rule_labels(py_context):
        py_label = getattr(py_context, label)
        cpp_label = getattr(cpp_context, label)
        assert type(py_label) == type(cpp_label)
        if isinstance(py_label, CommonToken):
            compare_common_token(py_label, cpp_label)
        elif isinstance(py_label, ParserRuleContext):
            compare_context(py_label, cpp_label)


def test_compare_py_and_cpp_parse_trees(seed):
    """Compares the trees produced by Python and C++ version of the parser

    Based on validation code included in `speedy_antlr_tool`
    https://github.com/amykyta3/speedy-antlr-tool/blob/master/speedy_antlr_tool/validate.py

    Some assertions have been removed to account for (closed but still present) issue
    https://github.com/amykyta3/speedy-antlr-tool/issues/3
    """

    stream = InputStream(data=seed)

    py_context = sa_tsql._py_parse(stream, "tsql_file")
    cpp_context = sa_tsql._cpp_parse(stream, "tsql_file")

    assert py_context.parentCtx is None
    assert cpp_context.parentCtx is None

    compare_context(py_context, cpp_context)


@mock.patch("pytsql.grammar.sa_tsql._cpp_parse", wraps=sa_tsql._cpp_parse)
@mock.patch("pytsql.grammar.sa_tsql._py_parse", wraps=sa_tsql._py_parse)
def test_compare_py_and_cpp__split(py_parse_mock, cpp_parse_mock, seed):
    sa_tsql.USE_CPP_IMPLEMENTATION = False
    py_result = _split(seed)
    py_parse_mock.assert_called_once()

    sa_tsql.USE_CPP_IMPLEMENTATION = True
    cpp_result = _split(seed)
    cpp_parse_mock.assert_called_once()

    assert py_result == cpp_result


def test__py_parse__warns():
    with mock.patch("pytsql.tsql.USE_CPP_IMPLEMENTATION", False):
        with pytest.warns(match=r"Can not find C\+\+ version of the parser"):
            _split("")
