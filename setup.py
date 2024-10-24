import glob
import platform

import setuptools


def get_platform() -> str:
    """Return the platform on which this code is run.

    Returns the platform name stripped of unnecessary information if the platform is known.
    Otherwise, returns the full platform name.
    """

    known_platforms = {"windows", "linux", "darwin", "cygwin"}

    target = platform.system().lower()
    for known in known_platforms:
        if target.startswith(known):
            return known

    return target


def create_extension() -> setuptools.Extension:
    """Create the ANTLR C++ extension to be passed to `setuptools.setup`"""

    extra_compile_args = {
        "windows": ["/DANTLR4CPP_STATIC", "/Zc:__cplusplus", "/std:c++17"],
        "linux": ["-std=c++17"],
        "darwin": ["-std=c++17", "-D_LIBCPP_DISABLE_AVAILABILITY"],
        "cygwin": ["-std=c++17"],
    }

    sources = glob.glob("src/pytsql/grammar/cpp_src/**/*.cpp", recursive=True)
    depends = glob.glob("src/pytsql/grammar/cpp_src/**/*.h", recursive=True)

    return setuptools.Extension(
        name="pytsql.grammar.sa_tsql_cpp_parser",
        include_dirs=["src/pytsql/grammar/cpp_src/antlr4-cpp-runtime"],
        sources=sources,
        depends=depends,
        extra_compile_args=extra_compile_args.get(get_platform(), []),
    )


def run_setup():
    setuptools.setup(
        ext_modules=[create_extension()],
    )


run_setup()
