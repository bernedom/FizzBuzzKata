cmake_minimum_required(VERSION 3.21)

project(
  FizzBuzzKata
  VERSION 1.0.0
  DESCRIPTION "FizzBuzz Kata - A coding kata to practice TDD"
  LANGUAGES CXX)

# Get Catch2 unit testing framework from github
include(CTest)
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.2.1)

FetchContent_MakeAvailable(Catch2)
include(Catch)

add_executable(FizzBuzzKata src/main.cpp src/FizzBuzz.cpp)

add_executable(FizzBuzzKataTest test/FizzBuzzTest.cpp src/FizzBuzz.cpp)
target_include_directories(FizzBuzzKataTest PRIVATE src)
target_link_libraries(FizzBuzzKataTest PRIVATE Catch2::Catch2WithMain)

catch_discover_tests(FizzBuzzKataTest)
