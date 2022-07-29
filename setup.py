from time import time

from setuptools import setup
from setuptools_scm.version import ScmVersion


def dev_and_timestamp_scheme(version: ScmVersion) -> str:
    if version.exact:
        return version.format_with("{tag}")
    return version.format_with(f"{{tag}}.dev{int(time())}")


setup(
    use_scm_version={
        "version_scheme": dev_and_timestamp_scheme,
        "local_scheme": "dirty-tag",
    },
)
