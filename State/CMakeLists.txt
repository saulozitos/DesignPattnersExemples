cmake_minimum_required(VERSION 3.6)

project(State LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_FILES
    src/controller.cpp
    src/controller.h
    src/economystate.h
    src/higheconomy.cpp
    src/higheconomy.h
    src/inuse.cpp
    src/inuse.h
    src/lockeconomy.cpp
    src/lockeconomy.h
    src/loweconomy.cpp
    src/loweconomy.h
    src/main.cpp
    src/mediumeconomy.cpp
    src/mediumeconomy.h
    src/mode.cpp
    src/mode.h
    )

add_executable(${PROJECT_NAME} ${PROJECT_FILES})
