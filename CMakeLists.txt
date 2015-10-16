cmake_minimum_required(VERSION 3.3)
project(MP2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    alloc.c
    alloc.h
    test1.c
    test2.c
    test3.c)

add_executable(MP2 ${SOURCE_FILES})