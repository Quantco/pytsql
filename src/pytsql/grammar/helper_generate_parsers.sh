#!/bin/bash

set -exuo pipefail

ANTLR4_JAR_FILEPATH=$1

cd "$( dirname "${BASH_SOURCE[0]}" )"

antlr4="java -jar $ANTLR4_JAR_FILEPATH"

# Generate C++ target with visitor
$antlr4 -Dlanguage=Cpp -visitor -no-listener -o cpp_src tsql.g4

# Generate Python target
$antlr4 -Dlanguage=Python3 -no-visitor -no-listener -o . tsql.g4

# Run speedy-antlr-tool to generate parse accelerator
python3 <<EOF
from speedy_antlr_tool import generate

generate(
    py_parser_path="tsqlParser.py",
    cpp_output_dir="cpp_src",
    entry_rule_names=["tsql_file"],
)
EOF
