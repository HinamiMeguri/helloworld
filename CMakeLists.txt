cmake_minimum_required(VERSION 3.0)

project(SWAP)

include_directories(include)

add_executable(main_cmake main.cpp src/swap.cpp)


set(CMAKE_BUILD_TYPE Debug)


