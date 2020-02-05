cmake_minimum_required(VERSION 3.6)
project(cmake_export_test)

find_package(bertha REQUIRED)

add_executable(cmake_export_test cmake_export_test.cpp)
target_link_libraries(cmake_export_test bertha::berthacore)
