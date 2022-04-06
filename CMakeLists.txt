cmake_minimum_required(VERSION 3.7)
project(Voxelator)

add_subdirectory(Rasteron)
add_subdirectory(Topl)

add_executable(Voxelator Voxelator_App.cpp)
# target_link_libraries(Voxelator Rasteron )