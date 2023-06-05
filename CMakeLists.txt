cmake_minimum_required(VERSION 3.20)
project(final-project)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

add_subdirectory(googletest)

add_executable(runAllTests
  main.cpp
  src/loginAuth.cpp

  
)

target_link_libraries(runAllTests gmock gtest gtest_main)