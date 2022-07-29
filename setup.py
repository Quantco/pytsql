from time import time

from setuptools import setup
from setuptools_scm.version import ScmVersion


def get_dev_timestamp(version: ScmVersion) -> str:
    """Returns a new distribution version string.

    Returns the version found in the git tag if currently checked out commit has a tag.
    Otherwise, returns the version found in the latest previous git tag, appended with `dev` + current timestamp
    """

    if version.exact:
        return version.format_with("{tag}")
    return version.format_with(f"{{tag}}.dev{int(time())}")


setup(
    use_scm_version={
        "version_scheme": get_dev_timestamp,
        "local_scheme": "dirty-tag",
    },
)
