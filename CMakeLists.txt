cmake_minimum_required(VERSION 3.14)

project(libCPP_Algoritmos LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(libCPP_Algoritmos SHARED
  libCPP_Algoritmos_global.h
  algoritmos.cpp
  algoritmos.h
)

target_compile_definitions(libCPP_Algoritmos PRIVATE LIBCPP_ALGORITMOS_LIBRARY)
