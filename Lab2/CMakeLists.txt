cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(calculator STATIC src/calculator.cpp)

add_executable(calculator_app src/main.cpp)
target_link_libraries(calculator_app calculator)
