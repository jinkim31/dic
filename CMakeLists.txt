cmake_minimum_required(VERSION 3.24)
project(dic)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_executable(dic main.cpp)

target_link_libraries(dic PRIVATE
        ${OpenCV_LIBS})