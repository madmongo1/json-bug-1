cmake_minimum_required(VERSION 3.22)
project(json_bug_1)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.79 COMPONENTS system)
add_executable(json_bug_1 main.cpp)
target_link_libraries(json_bug_1 PUBLIC Boost::system)

