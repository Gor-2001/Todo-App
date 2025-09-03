cmake_minimum_required(VERSION 3.16)
project(todoapp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Use Qt5 instead of Qt6
find_package(Qt5 REQUIRED COMPONENTS Widgets)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(todoapp
    src/main.cpp
    src/main_window.cpp
    inc/main_window.h
)

target_link_libraries(todoapp Qt5::Widgets)

