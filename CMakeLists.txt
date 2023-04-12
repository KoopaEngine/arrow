cmake_minimum_required(VERSION 3.15)

project(
 runner 
  VERSION 0.1
  DESCRIPTION
  "Physics Engine written in C++17"
  LANGUAGES CXX)

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(
    FATAL_ERROR "In-source builds are not allowed,please make new directory")
endif()

add_subdirectory(src)
add_subdirectory(runner)
