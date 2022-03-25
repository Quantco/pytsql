# Configuration file for the Sphinx documentation builder.
import os
import sys

print(f"READ THE DOCS DEBUG {os.getcwd()}")
sys.path.insert(0, os.path.abspath("../../src"))
new_path = os.path.abspath('../../src')
print(f"{new_path} added to path.")

# -- Project information

project = 'pytsql'
copyright = "(C) 2020-2021 QuantCo Inc."
author = "QuantCo Inc."

release = '1.0'
version = '1.0.0'

# -- General configuration

extensions = [
    'sphinx.ext.duration',
    'sphinx.ext.doctest',
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.intersphinx',
]

intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'sphinx': ('https://www.sphinx-doc.org/en/master/', None),
}
intersphinx_disabled_domains = ['std']

templates_path = ['_templates']

# -- Options for HTML output

html_theme = 'sphinx_rtd_theme'

# -- Options for nEPUB output
epub_show_urls = 'footnote'
