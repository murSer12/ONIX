cmake_minimum_required(VERSION 3.10)

project(ONIX CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(ONIX src/main.cpp)

target_sources(ONIX PRIVATE kernel/proccess/proc.cpp kernel/shell/shell.cpp)
target_include_directories(ONIX PRIVATE kernel/include)