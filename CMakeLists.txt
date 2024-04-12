cmake_minimum_required(VERSION 3.0)
project(Bin2ASCII-STL-Converter)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(include)

add_executable(Bin2ASCII-STL src/main_desktop.cpp src/ASCII_Convert.cpp src/BinSTL.cpp)

target_link_libraries(Bin2ASCII-STL Eigen3::Eigen)

install(TARGETS Bin2ASCII-STL DESTINATION bin)
install(DIRECTORY include/ DESTINATION include/Bin2ASCII-STL-Converter)
