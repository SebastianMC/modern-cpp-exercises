cmake_minimum_required(VERSION 3.10)
project(modern-cpp-exercises VERSION 1.0)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(source_root modern-cpp-exercises/ )
set(sources ${source_root}main.cpp
        modern-cpp-exercises/cpp23/cpp23-001-optional-par-in-lambdas.cpp
        modern-cpp-exercises/cpp23/cpp23-001-optional-par-in-lambdas.h)
add_executable(modern-cpp-exercises.cxx ${sources})
