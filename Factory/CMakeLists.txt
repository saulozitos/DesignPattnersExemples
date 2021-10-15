cmake_minimum_required(VERSION 3.6)

project(Factory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_FILES
    src/main.cpp
    src/ipoint.h
    src/point2d.cpp
    src/point2d.h
    src/point3d.cpp
    src/point3d.h
    src/pointfactory.cpp
    src/pointfactory.h
    )

add_executable(${PROJECT_NAME} ${PROJECT_FILES})
