cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
project(tarea3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(tarea3 main.cpp trees/src/tree.cpp trees/src/treeList.cpp trees/src/treeListNode.cpp)
target_include_directories(tarea3 PUBLIC ${PROJECT_SOURCE_DIR}/include)
