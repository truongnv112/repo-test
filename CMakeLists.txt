cmake_minimum_required(VERSION 2.8)
project( model )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( model objectdetection.cpp)
target_link_libraries( model ${OpenCV_LIBS} )
