cmake_minimum_required(VERSION 3.31)
project(playgroundC C)

set(CMAKE_C_STANDARD 23)

# add executables
add_executable(playgroundC src/main.c
        src/menu_item.c
        include/menu_item.h)
        #src/hello.c)

add_library(hellotest src/hello.c
        tests/test_hello.c
        include/hello.h)

target_include_directories(hellotest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(CTest)

if(BUILD_TESTING)
    add_executable(test_hello tests/test_hello.c
            src/hello.c)
    target_link_libraries(test_hello PRIVATE hellotest)
    add_test(NAME hello_tests COMMAND test_hello)
endif()