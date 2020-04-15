cmake_minimum_required(VERSION 3.17)

project("Classes_Objects") # project(${PROJECT_NAME})

add_library("UniLibrary" UniversityPerson.cpp UniversityPerson.hpp)

add_executable("${PROJECT_NAME}" Main.cpp)

target_link_libraries("${PROJECT_NAME}" PRIVATE "UniLibrary")
