set(CMAKE_AUTOMOC ON)
cmake_minimum_required(VERSION 3.15)
project(login)

set(CMAKE_CXX_STANDARD 14)
find_package(Qt5Widgets)
add_executable(login main.cpp Fenetre.cpp Fenetre.h)
target_link_libraries(login Qt5::Widgets)