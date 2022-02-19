# -*- coding: utf-8 -*-
from setuptools import setup

packages = \
['promisedio', 'promisedio.promise']

package_data = \
{'': ['*'], 'promisedio.promise': ['capsule/*', 'clinic/*']}

setup_kwargs = {
    'name': 'promisedio-promise',
    'version': '1.0.1',
    'description': 'High-performance promise implementation for Python',
    'long_description': None,
    'author': 'aachurin',
    'author_email': 'aachurin@gmail.com',
    'maintainer': None,
    'maintainer_email': None,
    'url': 'https://github.com/promisedio/promise',
    'packages': packages,
    'package_data': package_data,
    'python_requires': '>=3.10,<4.0',
}
from build import *
build(setup_kwargs)

setup(**setup_kwargs)
