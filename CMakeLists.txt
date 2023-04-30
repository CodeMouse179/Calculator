cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 11)

project(Calculator)

add_executable(cal
    src/main.cpp
    src/Calculator.hpp
    src/String.hpp
)