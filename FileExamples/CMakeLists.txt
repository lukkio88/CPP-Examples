cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(FileExamples)
set(CMAKE_CXX_STANDARD 11)

if(WIN32)
	set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")
endif()

file(GLOB_RECURSE SRC_FILES "*.cpp")
file(GLOB_RECURSE HEADER_FILES "*.h")

add_library(f-example SHARED ${SRC_FILES} ${HEADER_FILES})
target_include_directories(f-example PUBLIC "./")
#add_custom_target(f-example SOURCES ${SRC_FILES} ${HEADER_FILES})
set_target_properties(f-example PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})