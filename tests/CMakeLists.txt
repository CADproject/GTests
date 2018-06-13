cmake_minimum_required(VERSION 3.11.1)
set(CMAKE_CXX_STANDARD 17)

project(mytest)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/include/)

set(SOURCE_LIB main.cpp case1.cpp case2.cpp case3.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_LIB})

set(GET_STATIC_LIBRARY "on")

subdirs(googletest ../application)

target_link_libraries(${PROJECT_NAME} gtest myappstatic)
