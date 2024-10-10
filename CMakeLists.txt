cmake_minimum_required(VERSION 3.29)
project(z2)

set(CMAKE_CXX_STANDARD 20)

add_executable(z2 main.cpp
        Animal.cpp
        Animal.h
        Dog.cpp
        Dog.h)
