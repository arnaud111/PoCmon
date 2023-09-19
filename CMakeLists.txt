cmake_minimum_required(VERSION 3.24)
project(PoCmon C)

set(CMAKE_C_STANDARD 11)

add_executable(PoCmon main.c sqlite3/sqlite3.h sqlite3/sqlite3.c)
