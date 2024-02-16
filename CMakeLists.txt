cmake_minimum_required(VERSION 3.23)
project(ringlab7)

set(CMAKE_CXX_STANDARD 14)

add_executable(ringlab7 main.cpp buffer.h)
enable_testing()
add_subdirectory(tests)
