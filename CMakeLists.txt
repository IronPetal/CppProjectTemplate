#===============================================================================
#CMAKE properties

cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#===============================================================================
#PROJECT properties

project(CppProjectTemplate LANGUAGES CXX)
add_executable(${PROJECT_NAME}
    "main.cpp"
)


#===============================================================================
#SUBPROJECTS

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(Core)


#===============================================================================
#LIBRARIES
include(FindPkgConfig REQUIRED)


target_link_libraries(${PROJECT_NAME} Core)

#set(Boost_USE_STATIC_LIBS OFF)
#set(Boost_USE_MULTITHREADED ON)
#find_package (Boost COMPONENTS system filesystem regex signals REQUIRED)
#include_directories(${Boost_INCLUDE_DIRS})
#target_link_libraries (${PROJECT_NAME} ${Boost_LIBRARIES})


#===============================================================================
#INSTALLATIONS

#install(TARGETS ${PROJECT_NAME}
#    DESTINATION "/usr/local/bin"
#    )

