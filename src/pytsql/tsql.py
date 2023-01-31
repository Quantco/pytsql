import logging
import re
import warnings
from pathlib import Path
from re import Match
from typing import Any, Dict, List, Optional, Union

import antlr4.tree.Tree
import sqlalchemy
from antlr4 import InputStream, Token
from sqlalchemy.engine import Connection

from pytsql.grammar import USE_CPP_IMPLEMENTATION, SA_ErrorListener, parse, tsqlParser

_REPLACE_START = "<replace>"
_REPLACE_END = "</replace>"
_EOF = "<EOF>"
_GO = "GO"
_PRINTS_TABLE = "#pytsql_prints"

logger = logging.getLogger("pytsql")


def _code(path: Union[str, Path], encoding: str) -> str:
    with Path(path).open(encoding=encoding) as fh:
        return "\n".join(fh.readlines())


def _process_replacement(line: str, parameters: Dict[str, Any]) -> str:
    """Appropriately replace a single <replace> statement."""
    new_line = line.format(**parameters)
    if None in parameters.values():
        raise ValueError("Found a parameter with no specified replacement value.")
    if "{" and "}" in new_line:
        raise ValueError(
            "There was a parameter that was not replaced. Double check the parameters dictionary."
        )
    return new_line


def _parametrize(
    source: str,
    parameters: Dict[str, Any],
    start: str = _REPLACE_START,
    end: str = _REPLACE_END,
) -> str:
    """Replace all {start} and {end} statements, i.e. parametrizes the SQL script.

    Parameters
    ----------
        source:     string containing the source SQL code
        parameters: dictionary containing variables and their replacements
    Returns
    -------
        the input source code, separated by newlines, with parameter replacements
    """

    def parametrization_replacer(match: Match) -> str:
        return _process_replacement(match.group(1), parameters)

    # The pattern matches all parametrization patterns, including those within a string literal.
    pattern = re.compile(
        rf"/\* {re.escape(start)} \*/.*?/\* {re.escape(end)}(.*?) \*/",
        re.DOTALL | re.MULTILINE,
    )

    parametrized = re.sub(pattern, parametrization_replacer, source)

    non_empty_stripped_lines = [
        x.strip() for x in parametrized.split("\n") if x.strip() != ""
    ]

    return "\n".join(non_empty_stripped_lines)


class _TSQLVisitor(antlr4.ParseTreeVisitor):
    def __init__(self):
        # This attribute holds declarations of sql variables, also
        # referred to as `dynamic sql`.
        # In sql ides, these variables remain part of a session and
        # can therefore be used in the entirety of a script.
        # When executing code via sqlalchemy, on the other hand, this
        # session information is lost after the execution of a batch.
        # We therefore need to manually prepend it to all following
        # batches.
        self.dynamics: List[str] = []

    def visit(
        self, tree: tsqlParser.Sql_clauseContext, prepend_dynamics: bool = True
    ) -> str:
        dynamics = self.dynamics[:]

        chunks = tree.accept(self)

        # CREATE SCHEMA/VIEW must be the only statement in a batch
        is_create_schema_or_view = tree.ddl_clause() is not None and (
            tree.ddl_clause().create_schema() is not None
            or tree.ddl_clause().create_view() is not None
        )
        if not prepend_dynamics or is_create_schema_or_view:
            return " ".join(chunks)

        return " ".join(dynamics + chunks)

    def visitChildren(self, node: antlr4.ParserRuleContext) -> List[str]:
        if isinstance(node, tsqlParser.Print_statementContext):
            # Print statements are replaced by inserts into a temporary table so that they can be evaluated
            # at the right time and fetched afterwards.
            result = (
                f"INSERT INTO {_PRINTS_TABLE} VALUES ( LEFT (".split()
                + super().visitChildren(node.expression())
                + ", 2000 ) ) ;".split()
            )
        else:
            result = super().visitChildren(node)

        if isinstance(node, tsqlParser.Declare_statementContext):
            self.dynamics.extend(result)

        return result

    def visitTerminal(self, node: antlr4.TerminalNode) -> List[str]:
        return [str(node)]

    def defaultResult(self) -> List[str]:
        return []

    def aggregateResult(
        self, aggregate: List[str], next_result: List[str]
    ) -> List[str]:
        return aggregate + next_result


class _RaisingErrorListener(SA_ErrorListener):
    def syntaxError(
        self,
        input_stream: InputStream,
        offendingSymbol: Optional[Token],
        char_index: int,
        line: int,
        column: int,
        msg: str,
    ):
        error_message = f"Line {line}:{column} {msg}."
        if offendingSymbol is not None:
            error_message += f" Problem near token '{offendingSymbol.text}'."
        logger.error(error_message)
        raise ValueError(f"Error parsing SQL script: {error_message}")


def _split(code: str, isolate_top_level_statements: bool = True) -> List[str]:
    if not USE_CPP_IMPLEMENTATION:
        warnings.warn(
            "Can not find C++ version of the parser, Python version will be used instead."
            " Something is likely wrong with your installation of the package,"
            " and is preventing the use of the faster C++ parser."
        )

    logger.debug("Started SQL script parsing")

    # The default error listener only prints to the console without raising exceptions.
    error_listener = _RaisingErrorListener()

    # Using code created by `speedy-antlr-tool` to parse the input.
    tree = parse(InputStream(data=code), "tsql_file", error_listener)
    visitor = _TSQLVisitor()

    # Our current definition of a 'batch' in isolation mode is a single top-level SQL clause.
    # Note that this differs from the grammar definition of a batch, which is
    # a group of clauses between GO statements. The latter matches the definition of batches
    # in non-isolation mode.
    batches = []
    for batch in tree.batch():
        clauses = []
        first_clause_in_batch = True
        for sql_clause in batch.sql_clauses().sql_clause():
            prepend_dynamics = first_clause_in_batch or isolate_top_level_statements
            clause = visitor.visit(sql_clause, prepend_dynamics=prepend_dynamics)
            if clause != "":
                clauses.append(clause)
                first_clause_in_batch = False
        if isolate_top_level_statements:
            batches.extend(clauses)
        else:
            batches.append("\n".join(clauses))

    logger.debug("SQL script parsed successfully.")

    return batches


def _fetch_and_clear_prints(conn: Connection):
    prints = conn.execute(f"SELECT * FROM {_PRINTS_TABLE};")
    for row in prints.all():
        logger.info(f"SQL PRINT: {row[0]}")
    conn.execute(f"DELETE FROM {_PRINTS_TABLE};")


def executes(
    code: str,
    engine: sqlalchemy.engine.Engine,
    parameters: Optional[Dict[str, Any]] = None,
    isolate_top_level_statements=True,
) -> None:
    """Execute a given sql string through a sqlalchemy.engine.Engine connection.

    Please note either no parameters should be used or all parameters marked in a sql
    script should be given.

    Args
    ----
    code T-SQL string to be executed
    engine (sqlalchemy.engine.Engine): established mssql connection
    parameters An optional dictionary of parameters to substituted in the sql script
    isolate_top_level_statements: whether to execute statements one by one or in whole batches

    Returns
    -------
    None

    """
    parametrized_code = _parametrize(code, parameters) if parameters else code
    with engine.connect().execution_options(isolation_level="AUTOCOMMIT") as conn:
        # Since the prints table is a temporary one, it will be local to the connection and it will be dropped once the
        # connection is closed. Caveat: sqlalchemy engines can pool connections, so we still have to drop it preemtively.
        conn.execute(f"DROP TABLE IF EXISTS {_PRINTS_TABLE}")
        conn.execute(f"CREATE TABLE {_PRINTS_TABLE} (p NVARCHAR(4000))")
        for batch in _split(parametrized_code, isolate_top_level_statements):
            conn.execute(batch)
            _fetch_and_clear_prints(conn)


def execute(
    path: Union[str, Path],
    engine: sqlalchemy.engine.Engine,
    parameters: Optional[Dict[str, Any]] = None,
    isolate_top_level_statements=True,
    encoding: str = "utf-8",
) -> None:
    """Execute a given sql script through a sqlalchemy.engine.Engine connection.

    Args
    ----
    path (Path or str): Path to the sql file to be executed
    engine (sqlalchemy.engine.Engine): established mssql connection
    encoding: file encoding of the sql script (default: utf-8)
    isolate_top_level_statements: whether to execute statements one by one or in whole batches

    Returns
    -------
    None

    """
    executes(_code(path, encoding), engine, parameters, isolate_top_level_statements)
