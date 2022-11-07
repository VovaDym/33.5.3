
cmake_minimum_required (VERSION 3.8)

project ("33.5.3")

set (CMAKE_CXX_STANDARD 20)

set (MY_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_subdirectory (src)

