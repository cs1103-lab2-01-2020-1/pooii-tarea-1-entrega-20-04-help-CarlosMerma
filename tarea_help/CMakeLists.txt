cmake_minimum_required(VERSION 3.15)

project(tarea_help)

file(GLOB SOURCES "src/*")

file(GLOB SOURCES "src/template/*")

add_executable(tarea_help ${SOURCES})

