import os
import sysconfig
import pkg_resources
from setuptools.extension import Extension
from setuptools.command.build_ext import build_ext

define_macros = {}
undef_macros = []
env = os.environ.get

if env("BUILD_DEBUG_LOG"):
    define_macros["BUILD_DEBUG_LOG"] = "1"
    undef_macros += ["NDEBUG"]

if env("BUILD_DEBUG_MEM"):
    define_macros["BUILD_DEBUG_MEM"] = "1"
    undef_macros += ["NDEBUG"]

if env("BUILD_DISABLE_FREELISTS"):
    define_macros["BUILD_DISABLE_FREELISTS"] = "1"

define_macros["Py_BUILD_CORE"] = "1"
define_macros = list(define_macros.items())
py_libs = sysconfig.get_config_var("LIBDIR")

try:
    build_environment_include = pkg_resources.resource_filename("promisedio_build_environment", "headers")
except ModuleNotFoundError:
    raise Extension("Install promisedio_build_environment first.")

ext_modules = [
    Extension(
        "promisedio.promise._promise",
        sources=["promisedio/promise/promise.c"],
        define_macros=define_macros,
        undef_macros=undef_macros,
        include_dirs=[build_environment_include, "promisedio/promise"],
        extra_compile_args=["-O2"]
    )
]


def build(setup_kwargs):
    """
    This function is mandatory in order to build the extensions.
    """
    setup_kwargs.update({
        "ext_modules": ext_modules,
        "cmdclass": {"build_ext": build_ext},
        "zip_safe": False
    })
