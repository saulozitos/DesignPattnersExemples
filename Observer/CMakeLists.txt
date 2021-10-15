cmake_minimum_required(VERSION 3.6)

project(Observer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_FILES
    src/main.cpp
    src/iobserver.h
    src/observer.cpp
    src/observer.h
    src/isubject.h
    src/subject.cpp
    src/subject.h
    )

add_executable(${PROJECT_NAME} ${PROJECT_FILES})
