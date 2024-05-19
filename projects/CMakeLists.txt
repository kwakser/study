cmake_minimum_required(VERSION 3.2...3.27.5)

project(study)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(bubble_sort)
add_subdirectory(bubble_sort_mf)
#add_subdirectory(scl)
add_subdirectory(travell)
add_subdirectory(unit_test_example)
#add_subdirectory(structures)
add_subdirectory(list)
add_subdirectory(vector)

set(CMAKE_SUPPRESS_REGENERATION true)
