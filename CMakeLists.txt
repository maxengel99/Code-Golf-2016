cmake_minimum_required(VERSION 3.6)
project(codeGolf2016)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES problem1.cpp)
add_executable(codeGolf2016 ${SOURCE_FILES})