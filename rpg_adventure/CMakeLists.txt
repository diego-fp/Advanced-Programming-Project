cmake_minimum_required(VERSION 3.17)
project(rpg_adventure)

set(CMAKE_CXX_STANDARD 14)

add_executable(rpg_adventure main.cpp Player.cpp Player.h InputOutput.cpp InputOutput.h)