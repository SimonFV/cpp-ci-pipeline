cmake_minimum_required(VERSION 3.8)

set(SOURCES
  CalculatorTest.cpp
)

add_executable(calculator_test ${SOURCES})
target_link_libraries(calculator_test PUBLIC
  gtest_main
  core
)

add_test(
  NAME calculator_test
  COMMAND calculator_test
)