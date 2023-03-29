import click
from pathlib import Path
import re

PROTECTED_RULE_ELEMENT_LABELS = [
    "from",
    "id",
    "property",
    "str",
    "format",
    "input",
    "with",
    "type",
    "file"
]
CONFLICTING_NAMES_ON_WINDOWS = [
    "PLATFORM"
]

# CLI rename_protected_rule_element_labels
@click.group()
def rename_protected_rule_element_labels_cli():
    pass


@rename_protected_rule_element_labels_cli.command()
@click.option(
    "-f", "--filepath",
    type=click.Path(path_type=Path),
    help="Path to a .g4 grammar file.",
)
def rename_protected_rule_element_labels(filepath: str) -> None:
    """
    Some rule element labels have the same name as protected objects in C++. Hence, rename those labels.
    """
    rename_policy_suffix = "_label"

    with open(filepath, 'r+') as file:
        grammar = file.read()
        for label in PROTECTED_RULE_ELEMENT_LABELS:
            grammar = re.sub(fr"(?<=[\( |]){label}(?=[ ]?\=)", f"{label}{rename_policy_suffix}", grammar)

        file.seek(0, 0)
        file.write(grammar)

# CLI: add_removal_of_specified_names_on_windows
@click.group()
def removal_of_specified_names_on_windows_cli():
    pass

@removal_of_specified_names_on_windows_cli.command()
@click.option(
    "-f", "--filepath",
    type=click.Path(path_type=Path),
    help="Path to an auto-generated file by `speedy-antlr-tool`",
)
def add_removal_of_specified_names_on_windows(filepath: str) -> None:
    """
    Remove certain protected names for C++ compilation on Windows.

    For more see: https://learn.microsoft.com/en-us/windows/win32/menurc/-undef
    """
    undef_list = "\n".join([f"#undef {name}" for name in CONFLICTING_NAMES_ON_WINDOWS])

    with open(filepath, "r+") as file:

        content = file.read()
        file.seek(0, 0)
        file.write(undef_list + content)

cli = click.CommandCollection(
    sources=[rename_protected_rule_element_labels_cli, removal_of_specified_names_on_windows_cli]
)

if __name__ == "__main__":
    cli()