cmake_minimum_required(VERSION 3.6)

project(Prototype LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_FILES
    src/main.cpp
    src/ianimal.h
    src/dog.h
    src/dog.cpp
    src/cat.h
    src/cat.cpp
    )

add_executable(${PROJECT_NAME} ${PROJECT_FILES})
