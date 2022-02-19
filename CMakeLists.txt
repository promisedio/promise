# this file is only for CLion (not for building)

cmake_minimum_required(VERSION 3.19)
project(promisedio_promise C)

add_compile_options(-Werror)
set(CMAKE_C_STANDARD 11)

#message(STATUS "${PYTHON_INCLUDE_DIRS}")

include_directories(/Library/Frameworks/Python.framework/Versions/3.10/include/python3.10)
include_directories(promisedio/promise)
include_directories(/Users/a.churin/Library/Caches/pypoetry/virtualenvs/promisedio-promise-2gLGqkth-py3.10/lib/python3.10/site-packages/promisedio_build_environment/headers)

add_library(promisedio.promise SHARED
            promisedio/promise/promise.c)
