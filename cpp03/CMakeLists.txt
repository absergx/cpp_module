cmake_minimum_required(VERSION 3.17)
project(cpp03)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00
        ex00/main.cpp ex00/FragTrap.cpp)
add_executable(ex01
		ex01/main.cpp ex01/ScavTrap.cpp)
