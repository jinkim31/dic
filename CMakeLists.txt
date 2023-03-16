cmake_minimum_required(VERSION 3.24)
project(dic)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_subdirectory(lib/eigen)

file(GLOB opencorr_source
        "lib/OpenCorr/*.h"
        "lib/OpenCorr/*.cpp"
        )

add_executable(dic
        main.cpp
        ${opencorr_source}
        lib/nanoflann/include/nanoflann.hpp)

target_include_directories(dic PRIVATE
        lib/OpenCorr/src
        lib/nanoflann/include)

target_link_libraries(dic PRIVATE
        ${OpenCV_LIBS}
        Eigen3::Eigen)