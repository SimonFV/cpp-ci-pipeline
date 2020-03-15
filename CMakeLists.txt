cmake_minimum_required(VERSION 3.8)

project(cpp-ci-pipeline)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

enable_testing()
add_subdirectory(googletest)

set(HEADERS
  include/Calculator.hpp
)

set(SOURCES 
  src/Calculator.cpp
)

add_library(core ${HEADERS} ${SOURCES})

target_include_directories(core
  PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(Calculator main.cpp)

target_link_libraries(Calculator
  core
)

add_subdirectory(test)