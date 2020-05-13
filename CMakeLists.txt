cmake_minimum_required(VERSION 3.15.2)
project(Nonius_BM VERSION 1.0.0)

set(include_DIR ${PROJECT_SOURCE_DIR}/nonius-1.1.2/include)
set(include_DIR2 C:/boost)



include_directories(${include_DIR})
include_directories(${include_DIR2})


add_executable(main main.cpp)
