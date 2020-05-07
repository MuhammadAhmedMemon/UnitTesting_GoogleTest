
Cmake_minimum_required(VERSION 3.15.3)
project(UnitTestGTest VERSION 1.0.0)

set(CMAKE_INLCUDE_PATH ./googletest/googletest/include)
set(CMAKE_LIBRARY_PATH ./googletest/build/lib/debug)


include_directories(CMAKE_INCLUDE_PATH)

link_directories(CMAKE_LIBRARY_PATH)

add_executable(main main.cpp)

target_link_libraries(main gtest_maind.lib gtestd.lib)