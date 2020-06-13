cmake_minimum_required(VERSION 3.8)

set(This Laborator-Pilot)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(test-framework)

set(Headers
    complex.cpp
)

set(Sources
    complex.hpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)