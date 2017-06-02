cmake_minimum_required(VERSION 3.7)
project(at_home)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        w2_at_home.cpp Kingdom.h Kingdom.cpp)

add_executable(at_home ${SOURCE_FILES} Kingdom.h Kingdom.cpp)