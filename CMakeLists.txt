cmake_minimum_required(VERSION 3.8)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        BinarySearchTree/BinarySearchTree.cpp
        BinarySearchTree/BinarySearchTree.h
        BinarySearchTree/main.cpp Stack/main.cpp Stack/Stack.h Stack/Stack.cpp)

add_executable(DataStructure ${SOURCE_FILES})