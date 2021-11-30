cmake_minimum_required(VERSION 3.20)
project(prog6)

set(CMAKE_CXX_STANDARD 14)

# add_compile_options(-Wall -Wextra -Werror)
set(SOURCE_FILES main.cpp)
add_executable(prog6 ${SOURCE_FILES})
