# this file is only for CLion (not for building)

cmake_minimum_required(VERSION 3.19)
project(promisedio_promise C)

add_compile_options(-Werror)
set(CMAKE_C_STANDARD 11)
execute_process(COMMAND bash "-c" "poetry env list --full-path | cut -d' ' -f1" OUTPUT_VARIABLE poetry_env)
string(REGEX REPLACE "\n$" "" poetry_env "${poetry_env}")

include_directories(/Library/Frameworks/Python.framework/Versions/3.10/include/python3.10)
include_directories(${poetry_env}/lib/python3.10/site-packages/promisedio_build_environment/include)

add_definitions(-DBUILD_DEBUG_LOG -DBUILD_DEBUG_MEM)

add_library(promisedio.promise SHARED
            promisedio/promise/promise.c)
