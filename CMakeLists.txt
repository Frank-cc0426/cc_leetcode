cmake_minimum_required(VERSION 3.4.1)

project(two_sum)

include_directories(questions/two_sum questions/two_add)

add_executable(two_sum main.cpp questions/two_sum/method1.cpp questions/two_sum/method2.cpp questions/two_add/method1.cpp)