cmake_minimum_required(VERSION 3.0)

project(distributedstatespace C CXX)

# compiler flags
if(CMAKE_COMPILER_IS_GNUCC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")
endif()

# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(mc-sog C CXX)

# compiler flags
if(CMAKE_COMPILER_IS_GNUCC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")
endif()

# add source folder
include_directories(src)
add_subdirectory(src)


