cmake_minimum_required(VERSION 3.0)

project(distributedstatespace LANGUAGES C)

add_executable(distributedstatespace main.c)

install(TARGETS distributedstatespace RUNTIME DESTINATION bin)
