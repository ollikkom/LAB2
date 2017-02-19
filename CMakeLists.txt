cmake_minimum_required(VERSION 3.6)
project(LABb2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Rect.h Rect.cpp)
add_executable(LABb2 ${SOURCE_FILES})