#===============================================================================
#CMAKE properties

cmake_minimum_required(VERSION 3.14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#===============================================================================
#PROJECT properties

project(Core LANGUAGES CXX)

#file(GLOB HEADERS . ${PROJECT_SOURCE_DIR}/*.h)
#file(GLOB SOURCES . ${PROJECT_SOURCE_DIR}/*.cpp)

add_library(Core STATIC
  app.cpp
  app.h
)

#target_compile_definitions(${PROJECT_NAME} PRIVATE CORE_LIBRARY)
