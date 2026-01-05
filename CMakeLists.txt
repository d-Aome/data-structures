cmake_minimum_required(VERSION 4.0)
project(data_structures)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_C_STANDARD 17)

file(GLOB_RECURSE sources
    "${CMAKE_SOURCE_DIR}/src/*/*.c"
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

add_definitions(-DSOME_DEFINITION)

add_executable(app ${sources})

target_include_directories(app SYSTEM PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# target_precompiled_headers(my_app PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
