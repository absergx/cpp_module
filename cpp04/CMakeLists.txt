cmake_minimum_required(VERSION 3.17)
project(cpp04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/main.cpp ex00/Sorcerer.cpp ex00/Victim.cpp ex00/Peon.cpp)
add_executable(ex01 ex01/AWeapon.cpp ex01/PlasmaRifle.cpp ex01/PowerFist.cpp ex01/Enemy.cpp ex01/SuperMutant.cpp ex01/RadScorpion.cpp ex01/Character.cpp ex01/main.cpp)
add_executable(ex02 ex02/Squad.cpp ex02/TacticalMarine.cpp ex02/AssaultTerminator.cpp ex02/main.cpp)
add_executable(ex03 ex03/AMateria.cpp ex03/Ice.cpp ex03/Cure.cpp ex03/Character.cpp ex03/MateriaSource.cpp ex03/main.cpp)