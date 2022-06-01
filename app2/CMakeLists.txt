cmake_minimum_required(VERSION 2.8.3)
project(app2_triangle)

SET(CMAKE_INSTALL_PREFIX /usr/local/flytos/flytapps CACHE PATH "Cmake install prefix path for flytapps" FORCE)

add_definitions(-std=c++11)

find_package(catkin REQUIRED COMPONENTS cpp_api)
find_package(Boost REQUIRED COMPONENTS system python)
find_package(PythonLibs 2.7 REQUIRED)
include_directories(${catkin_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

add_executable(app2_triangle app2_triangle.cpp)
target_link_libraries(app2_triangle ${catkin_LIBRARIES} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES}) 

install(TARGETS app2_triangle
  DESTINATION /flyt/userapps/onboard_user/install COMPONENT Runtime
)
