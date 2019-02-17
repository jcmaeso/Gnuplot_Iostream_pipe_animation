cmake_minimum_required(VERSION 3.13)
project(gnuPlotIostream)

set(CMAKE_CXX_STANDARD 14)

add_executable(gnuPlotIostream main.cpp)
target_link_libraries(gnuPlotIostream -lboost_iostreams)
target_link_libraries(gnuPlotIostream -lboost_system)
target_link_libraries(gnuPlotIostream -lboost_filesystem)
target_link_libraries(gnuPlotIostream -lutil)
