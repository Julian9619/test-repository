cmake_minimum_required(VERSION 3.0.2)
project(gazebo_hello)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)


find_package(catkin REQUIRED COMPONENTS
  gazebo_ros
  roscpp
)

find_package(gazebo REQUIRED)

link_directories(${GAZEBO_LIBRARY_DIRS})


catkin_package(
  DEPENDS 
  system_lib
  roscpp
  gazebo_ros
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
)

add_library(${PROJECT_NAME} src/hello.cpp)
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} ${GAZEBO_LIBRARIES})