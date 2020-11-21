cmake_minimum_required(VERSION 3.17)
project(cpp04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/main.cpp ex00/Bureaucrat.cpp)