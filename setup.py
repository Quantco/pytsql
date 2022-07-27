import fnmatch
import os
import platform
from time import time

import setuptools
from setuptools_scm.version import ScmVersion

target = platform.system().lower()
PLATFORMS = {"windows", "linux", "darwin", "cygwin"}
for known in PLATFORMS:
    if target.startswith(known):
        target = known


def get_dev_timestamp(version: ScmVersion) -> str:
    """Return a new distribution version string.

    Returns the version found in the git tag if currently checked out commit has a tag.
    Otherwise, returns the version found in the most recent git tag, appended with
    `dev` and the current timestamp in seconds.
    """

    if version.exact:
        return version.format_with("{tag}")
    return version.format_with(f"{{tag}}.dev{int(time())}")


def run_setup():
    extra_compile_args = {
        "windows": ["/DANTLR4CPP_STATIC", "/Zc:__cplusplus"],
        "linux": ["-std=c++11"],
        "darwin": ["-std=c++11"],
        "cygwin": ["-std=c++11"],
    }

    parser_ext = setuptools.Extension(
        name="pytsql.grammar.sa_tsql_cpp_parser",
        include_dirs=["src/pytsql/grammar/cpp_src/antlr4-cpp-runtime"],
        sources=get_files("src/pytsql/grammar/cpp_src", "*.cpp"),
        depends=get_files("src/pytsql/grammar/cpp_src", "*.h"),
        extra_compile_args=extra_compile_args.get(target, []),
    )

    setuptools.setup(
        ext_modules=[parser_ext],
        use_scm_version={
            "version_scheme": get_dev_timestamp,
            "local_scheme": "dirty-tag",
        },
    )


def get_files(path, pattern):
    """Return all filenames matching the path and the pattern"""

    matches = []
    for root, _, filenames in os.walk(path):
        for filename in fnmatch.filter(filenames, pattern):
            matches.append(os.path.join(root, filename))
    return matches


run_setup()
