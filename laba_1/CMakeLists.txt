cmake_minimum_required(VERSION 3.14)

project(laba_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_executable(pure_num src/main.cpp src/pure_num.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(pure_num_test /tests/pure_num_test.cpp /src/pure_num.cpp)

target_link_libraries(pure_num_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(pure_num_test)