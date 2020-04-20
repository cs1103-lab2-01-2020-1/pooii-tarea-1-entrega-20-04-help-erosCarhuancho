cmake_minimum_required(VERSION 3.16)
project(tarea_help)
file(GLOB SOURCES "src/*")

add_executable(untitled src/main.cpp src/lib.h src/template/stack.cpp src/template/stack.h)
