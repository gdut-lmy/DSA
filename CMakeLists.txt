cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA main.cpp Inc/Vector.h Inc/vector_search_binary.h Inc/vector_constructor_by_copying.h Inc/vector_expend.h Inc/vector_find.h Inc/vector_search.h Inc/vector_shrink.h Inc/vector_insert.h Inc/vector_bracket.h Inc/vector_assignment.h)
