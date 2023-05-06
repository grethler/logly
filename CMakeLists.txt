cmake_minimum_required(VERSION 3.25)
project(Logly)

set(CMAKE_CXX_STANDARD 23)

add_executable(Logly main.cpp Logly/Logly.cpp Logly/Logly.h Logly/CheckSyntax.cpp Logly/CheckSyntax.h)