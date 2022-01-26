import logging
import re
from pathlib import Path
from re import Match
from typing import Any, Dict, List, Optional, Union

import antlr4.tree.Tree
import sqlalchemy
from antlr4 import CommonTokenStream, InputStream, RecognitionException, Token
from antlr4.error.ErrorListener import ErrorListener
from antlr4.Recognizer import Recognizer
from sqlalchemy.engine import Connection

from pytsql.grammar import tsqlLexer, tsqlParser

_REPLACE_START = "<replace>"
_REPLACE_END = "</replace>"
_EOF = "<EOF>"
_GO = "GO"
_PRINTS_TABLE = "#pytsql_prints"


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

    def visit(self, tree: tsqlParser.Sql_clauseContext) -> str:
        dynamics = self.dynamics[:]

        chunks = tree.accept(self)

        # CREATE SCHEMA must be the only statement in a batch
        if (
            tree.ddl_clause() is not None
            and tree.ddl_clause().create_schema() is not None
        ):
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


class _RaisingErrorListener(ErrorListener):
    def syntaxError(
        self,
        recognizer: Optional[Recognizer],
        offendingSymbol: Optional[Token],
        line: int,
        column: int,
        msg: str,
        e: Optional[RecognitionException],
    ):
        error_message = f"Line {line}:{column} {msg}."
        if offendingSymbol is not None:
            error_message += f" Problem near token '{offendingSymbol.text}'."
        logging.error(error_message)
        raise ValueError(f"Error parsing SQL script: {error_message}")


def _split(code: str) -> List[str]:
    logging.info("Started SQL script parsing")

    # The default error listener only prints to the console without raising exceptions.
    error_listener = _RaisingErrorListener()

    lexer = tsqlLexer(InputStream(data=code))
    lexer.removeErrorListeners()
    lexer.addErrorListener(error_listener)
    stream = CommonTokenStream(lexer)

    parser = tsqlParser(stream)
    parser.removeErrorListeners()
    parser.addErrorListener(error_listener)
    tree = parser.tsql_file()

    visitor = _TSQLVisitor()

    # Our current definition of a 'batch' is a single top-level SQL clause.
    # Note that this differs from the grammar definition of a batch, which is
    # a group of clauses between GO statements
    batches = []
    for batch in tree.batch():
        for sql_clause in batch.sql_clauses().sql_clause():
            batch_query = visitor.visit(sql_clause)
            if batch_query != "":
                batches.append(batch_query)

    logging.info("SQL script parsed successfully.")

    return batches


def _fetch_and_clear_prints(conn: Connection):
    prints = conn.execute(f"SELECT * FROM {_PRINTS_TABLE};")
    for row in prints.all():
        logging.info(f"Captured PRINT statement: {row[0]}")
    conn.execute(f"DELETE FROM {_PRINTS_TABLE};")


def executes(
    code: str,
    engine: sqlalchemy.engine.Engine,
    parameters: Optional[Dict[str, Any]] = None,
) -> None:
    """Execute a given sql string through a sqlalchemy.engine.Engine connection.

    Please note either no parameters should be used or all parameters marked in a sql
    script should be given.

    Args
    ----
    code T-SQL string to be executed
    engine (sqlalchemy.engine.Engine): established mssql connection
    parameters An optional dictionary of parameters to substituted in the sql script

    Returns
    -------
    None

    """
    parametrized_code = _parametrize(code, parameters) if parameters else code
    with engine.connect().execution_options(isolation_level="AUTOCOMMIT") as conn:
        conn.execute(f"CREATE TABLE {_PRINTS_TABLE} (p NVARCHAR(4000))")
        for batch in _split(parametrized_code):
            conn.execute(batch)
            _fetch_and_clear_prints(conn)


def execute(
    path: Union[str, Path],
    engine: sqlalchemy.engine.Engine,
    parameters: Optional[Dict[str, Any]] = None,
    encoding: str = "utf-8",
) -> None:
    """Execute a given sql script through a sqlalchemy.engine.Engine connection.

    Args
    ----
    path (Path or str): Path to the sql file to be executed
    engine (sqlalchemy.engine.Engine): established mssql connection
    encoding: file encoding of the sql script (default: utf-8)

    Returns
    -------
    None

    """
    executes(_code(path, encoding), engine, parameters)
