# cmake_minimum_required(VERSION 3.22.1)
# project(tarea2)

# set(CMAKE_CXX_STANDARD 11)

# add_executable(tarea2 test_parenthesis.cpp)

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
project(tarea2)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add_subdirectory(src)
#add_subdirectory(tests)

add_executable(tarea2 main.cpp src/node.cpp src/stack.cpp src/queue.cpp)
target_include_directories(tarea2 PUBLIC ${PROJECT_SOURCE_DIR}/include)
