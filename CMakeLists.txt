cmake_minimum_required(VERSION 3.28)
project(artcdoder)

set(CMAKE_CXX_STANDARD 17)

add_executable(artcdoder main.cpp
        decode.cpp
        decode.h
        compress.cpp
        compress.h
        encode.cpp
        encode.h)
