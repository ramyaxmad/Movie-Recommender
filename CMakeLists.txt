CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(MovieRecommender)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

# Make library
add_library(movie_lib STATIC
  src/FrontUI.cpp
  src/DBFilter.cpp
  src/DBManager.cpp
  src/loginAuth.cpp
  src/movie.cpp
  # add all .cpp files here
)
target_include_directories(movie_lib
  PUBLIC 
    ${PROJECT_SOURCE_DIR}/header
)
# Make executables
ADD_EXECUTABLE(runAllTests
  tests/test.cpp
)

ADD_EXECUTABLE(movieRec
  main.cpp
)

TARGET_LINK_LIBRARIES(movieRec movie_lib)

TARGET_LINK_LIBRARIES(runAllTests movie_lib)
TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)