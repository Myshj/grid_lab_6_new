cmake_minimum_required(VERSION 3.6)
project(grid_lab_6_new)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fopenmp")

set(SOURCE_FILES sequential_pi.c)
add_executable(sequential_pi ${SOURCE_FILES})

set(SOURCE_FILES parallel_pi.c)
add_executable(parallel_pi ${SOURCE_FILES})