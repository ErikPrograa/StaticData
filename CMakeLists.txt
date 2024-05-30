cmake_minimum_required(VERSION 3.28)
project(StaticData)

set(CMAKE_CXX_STANDARD 17)

add_executable(StaticData main.cpp
        Persona.cpp
        Persona.h)
