cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(CPP_Examples)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(./FileExamples)
set(INCLUDE_FOLDERS "./")
set(LIBRARIES f-example)

#set(SRC_FILES ./cpp_examples.cpp)
#set(HEADER_FILES ./cpp_examples.h)

file(GLOB_RECURSE SRC_FILES "./cpp_examples.cpp")
file(GLOB_RECURSE HEADER_FILES "./cpp_examples.h")

add_executable(cpp-examples ${SRC_FILES} ${HEADER_FILES})
target_include_directories(cpp-examples PUBLIC "./" "./FileExamples")
target_link_libraries(cpp-examples ${LIBRARIES})