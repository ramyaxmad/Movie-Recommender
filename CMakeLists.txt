cmake_minimum_required(VERSION 3.20)
project(final-project)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

add_subdirectory(googletest)

add_executable(runAllTests
  tests/test.cpp
  tests/testDbFilter.cpp
  src/DBFilter.cpp
  src/loginAuth.cpp
  src/DBManager.cpp
  src/movie.cpp
  src/FrontUI.cpp
  src/SortBy.cpp
)
add_executable(runMain
  src/DBFilter.cpp
  src/loginAuth.cpp
  src/DBManager.cpp
  src/movie.cpp
  src/FrontUI.cpp
  src/SortBy.cpp
  main.cpp
)

target_link_libraries(runAllTests gmock gtest gtest_main)