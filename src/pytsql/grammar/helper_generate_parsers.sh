#!/bin/bash

set -exuo pipefail

ANTLR4_JAR_FILEPATH=$1

cd "$( dirname "${BASH_SOURCE[0]}" )"

antlr4="java -jar $ANTLR4_JAR_FILEPATH"

# Optionally: Download grammar
# curl -o TSqlParser.g4 https://raw.githubusercontent.com/antlr/grammars-v4/master/sql/tsql/TSqlParser.g4
# curl -o TSqlLexer.g4 https://raw.githubusercontent.com/antlr/grammars-v4/master/sql/tsql/TSqlLexer.g4

# Adjust grammar for C++ target
python adjust_antlrs_grammar.py rename-protected-rule-element-labels -f TSqlParser.g4

# Generate C++ target with visitor
$antlr4 -Dlanguage=Cpp -o cpp_src TSqlLexer.g4
$antlr4 -Dlanguage=Cpp -visitor -no-listener -o cpp_src TSqlParser.g4

# Generate Python target
$antlr4 -Dlanguage=Python3 -o . TSqlLexer.g4
$antlr4 -Dlanguage=Python3 -no-visitor -o . TSqlParser.g4

# Run speedy-antlr-tool to generate parse accelerator
python3 <<EOF
from speedy_antlr_tool import generate

generate(
    py_parser_path="TSqlParser.py",
    cpp_output_dir="cpp_src",
    entry_rule_names=["tsql_file"],
)
EOF

# Adjust auto-generated files for protected names on Windows
python adjust_antlrs_grammar.py add-removal-of-specified-names-on-windows --filepath cpp_src/TSqlLexer.h
