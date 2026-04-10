cmake_minimum_required(VERSION 3.31)
project(playgroundC C)

set(CMAKE_C_STANDARD 23)

add_executable(playgroundC src/main.c
        src/menu_item.c
        include/menu_item.h)
