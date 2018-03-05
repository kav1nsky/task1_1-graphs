cmake_minimum_required(VERSION 3.8)
project(graphs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CListGraph.h CListGraph.cpp CMatrixGraph.cpp CMatrixGraph.h CArcGraph.h CArcGraph.cpp IGraph.h CSetGraph.cpp CSetGraph.h)
add_executable(graphs ${SOURCE_FILES})