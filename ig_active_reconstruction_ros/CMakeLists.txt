cmake_minimum_required(VERSION 2.8.3)
project(ig_active_reconstruction_ros)

list( APPEND CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

find_package(catkin REQUIRED COMPONENTS
  roscpp
  ig_active_reconstruction_msgs
  ig_active_reconstruction
  movements
)


catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS
    roscpp
    ig_active_reconstruction_msgs
    ig_active_reconstruction
    movements
)

include_directories(include
  ${catkin_INCLUDE_DIRS}
)

file(GLOB ${PROJECT_NAME}_CODE_BASE
  "src/code_base/*.cpp"
)

add_library(${PROJECT_NAME} STATIC
  ${${PROJECT_NAME}_CODE_BASE}
)

target_link_libraries(${PROJECT_NAME}
   ${catkin_LIBRARIES}
)

add_dependencies(${PROJECT_NAME} STATIC
 ${catkin_EXPORTED_TARGETS}
)