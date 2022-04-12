# Configuration file for the Sphinx documentation builder.

# -- Project information
project = "pytsql"
copyright = "(C) 2020-2021 QuantCo Inc."
author = "QuantCo Inc."

release = "1.0"
version = "1.0.0"

extensions = ["numpydoc", "sphinxcontrib.apidoc"]

apidoc_module_dir = "../../src/pytsql"
apidoc_output_dir = "api"
apidoc_separate_modules = True
apidoc_extra_args = ["--implicit-namespaces"]
apidoc_excluded_paths = ["grammar"]

exclude_patterns = ["_build", "Thumbs.db", ".DS_Store"]
html_theme = "sphinx_rtd_theme"
html_static_path = ["_static"]
