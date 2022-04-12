cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA_Vector
        src/vector_main.cpp
        inc_vector/Vector.h
        inc_vector/vector_search_binary.h
        inc_vector/vector_constructor_by_copying.h
        inc_vector/vector_expend.h
        inc_vector/vector_find.h
        inc_vector/vector_search.h
        inc_vector/vector_shrink.h
        inc_vector/vector_insert.h
        inc_vector/vector_bracket.h
        inc_vector/vector_assignment.h
        inc_vector/vector_remove.h
        inc_vector/vector_uniquify.h
        inc_vector/vector_deduplicate.h
        inc_vector/vector_sort.h
        inc_vector/rand.h
        inc_vector/vector_bubble_sort.h
        inc_vector/vector_merge_sort.h
)
add_executable(DSA_List
        src/list_main.cpp
        inc_list/list.h
        inc_list/listNode.h
        inc_list/listNode_implementation.h
        inc_list/list_initialize.h
        inc_list/list_bracket.h
        inc_list/list_find.h
        inc_list/list_insert.h
        inc_list/list_copyNodes.h
        inc_list/list_constructor_by_copying.h
        inc_list/list_remove.h
        inc_list/list_destructor.h
        inc_list/list_deduplicate.h
        inc_list/list_uniquify.h
        inc_list/list_traverse.h
        inc_list/list_search.h
        inc_list/list_sort.h
        inc_list/list_implementation.h)

