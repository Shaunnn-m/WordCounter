cmake_minimum_required(VERSION 3.27)
project(WordCounter)

set(CMAKE_CXX_STANDARD 20)

add_executable(WordCounter main.cpp
        Counter.cpp
        Counter.h
        CharInfo.cpp
        CharInfo.h)
