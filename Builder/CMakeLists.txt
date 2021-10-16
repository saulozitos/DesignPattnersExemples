cmake_minimum_required(VERSION 3.6)

project(Builder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_FILES
    src/main.cpp
    src/car.cpp
    src/car.h
    src/builder.h
    src/manager.h
    src/manager.cpp
    src/jeepbuilder.h
    src/jeepbuilder.cpp
    src/nissanbuilder.h
    src/nissanbuilder.cpp
    )

add_executable(${PROJECT_NAME} ${PROJECT_FILES})
