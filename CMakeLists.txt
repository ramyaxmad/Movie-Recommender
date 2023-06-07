# CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
# project(MovieRecommender)

# ADD_SUBDIRECTORY(googletest)

# SET(CMAKE_CXX_STANDARD 11)

# # Make library
# add_library(movie_lib STATIC
#   src/FrontUI.cpp
#   src/DBFilter.cpp
#   src/DBManager.cpp
#   src/loginAuth.cpp
#   src/movie.cpp
#   # add all .cpp files here
# )
# target_include_directories(movie_lib
#   PUBLIC 
#     ${PROJECT_SOURCE_DIR}/header
# )
# # Make executables
# ADD_EXECUTABLE(runAllTests
#   tests/test.cpp
# )

# ADD_EXECUTABLE(movieRec
#   main.cpp
# )

# TARGET_LINK_LIBRARIES(movieRec movie_lib)

# TARGET_LINK_LIBRARIES(runAllTests movie_lib)
# TARGET_LINK_LIBRARIES(runAllTests gtest)
# TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)

cmake_minimum_required(VERSION 3.20)
project(final-project)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

add_subdirectory(googletest)

add_executable(runAllTests
  tests/test.cpp
)
add_executable(runMain
  src/DBFilter.cpp
  src/loginAuth.cpp
  src/DBManager.cpp
  src/movie.cpp
  src/FrontUI.cpp
  main.cpp
)

target_link_libraries(runAllTests gmock gtest gtest_main)