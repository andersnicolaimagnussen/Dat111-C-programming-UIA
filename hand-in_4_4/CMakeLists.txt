cmake_minimum_required(VERSION 3.8)
project(hand_in_4_4)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(hand_in_4_4 ${SOURCE_FILES})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall -pedantic -D__USE_MINGW_ANSI_STDIO")