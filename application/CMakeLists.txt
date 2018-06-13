cmake_minimum_required(VERSION 3.11.1)
set(CMAKE_CXX_STANDARD 17)

project(myapp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(HEADER_APP lib.h)
set(SOURCE_APP main.cpp lib.cpp)

if(${GET_STATIC_LIBRARY})
	message(STATUS "Static library!!")
	set(LIBRARY_NAME ${PROJECT_NAME}static)
	add_library(${LIBRARY_NAME} STATIC ${SOURCE_APP})
	set(GET_STATIC_LIBRARY "off")
else()
	message(STATUS "Executable!!")
	set(EXECUTABLE_NAME ${PROJECT_NAME}exec)
	add_executable(${EXECUTABLE_NAME} ${SOURCE_APP})
endif()
