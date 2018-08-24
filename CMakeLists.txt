cmake_minimum_required (VERSION 2.8)
project (cpp_exp)

set (CMAKE_CXX_FLAGS "-pipe -std=c++11 -Wall -Wextra -march=native")
set (CMAKE_CXX_FLAGS_DEBUG "-O0 -g -D_DEBUG")
set (CMAKE_CXX_FLAGS_RELEASE "-O2 -flto -DNDEBUG")


include_directories (src)
add_subdirectory (src)
