cmake_minimum_required(VERSION 3.6)

project(DesignPattners LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Builder)
add_subdirectory(Factory)
add_subdirectory(Observer)
add_subdirectory(Prototype)
