
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
# set the project name

project(treeSO
VERSION 1.0
LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(treeSO main.cpp src/treeNode.cpp src/treeListNode.cpp src/treeList.cpp src/tree.cpp)
target_include_directories(treeSO PUBLIC ${PROJECT_SOURCE_DIR}/include)



# add the executable