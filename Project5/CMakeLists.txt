cmake_minimum_required(VERSION 3.17)
project(CSC173_Project_5_Boolean_Circuit_Simulator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CSC173_Project_5_Boolean_Circuit_Simulator
        Boolean.c
        Boolean.h
        Circuit.c
        Circuit.h
        Gates.c
        Gates.h
        main.c Parser.c Parser.h ParseTree.c ParseTree.h Stack.c Stack.h)
