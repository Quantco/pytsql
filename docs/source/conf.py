# Configuration file for the Sphinx documentation builder.
import os
import sys


print(f"READ THE DOCS DEBUG {os.getcwd()}")
#sys.path.insert(0, os.path.abspath("../../src"))
new_path = os.path.abspath('../../src')
print(f"{new_path} added to path.")

# -- Project information

project = 'pytsql'
copyright = "(C) 2020-2021 QuantCo Inc."
author = "QuantCo Inc."

release = '1.0'
version = '1.0.0'

extensions = ["numpydoc", "sphinxcontrib.apidoc"]

apidoc_module_dir = "../../src/pytsql"
apidoc_output_dir = "api"
apidoc_separate_modules = True
apidoc_extra_args = ["--implicit-namespaces"]
apidoc_excluded_paths = ["grammar"]

exclude_patterns = ["_build", "Thumbs.db", ".DS_Store"]
html_theme = "sphinx_rtd_theme"
html_static_path = ["_static"]
