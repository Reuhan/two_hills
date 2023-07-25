cmake_minimum_required(VERSION 3.25)
project(two_hills C)

set(CMAKE_C_STANDARD 11)

add_library(two_hills node.h stack.h stack.c)