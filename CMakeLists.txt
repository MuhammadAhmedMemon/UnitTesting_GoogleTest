
Cmake_minimum_required(VERSION 3.11.4)
project(UnitTestGTest VERSION 1.0.0)
set(CMAKE_CXX_FLAGS_DEBUG "/MTd")

set(Include_Dir ${PROJECT_SOURCE_DIR}/googletest/googletest/include)
set(Include_Lib ${PROJECT_SOURCE_DIR}/googletest/build/lib/debug)


include_directories(${Include_Dir})
add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main ${Include_Lib}/gtest_maind.lib ${Include_Lib}/gtestd.lib)