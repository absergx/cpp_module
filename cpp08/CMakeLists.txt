cmake_minimum_required(VERSION 3.17)
project(cpp08_tmp)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp)
add_executable(ex01 ex01/main.cpp ex01/span.cpp)
add_executable(ex02 ex02/main.cpp)