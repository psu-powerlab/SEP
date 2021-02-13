# You should always specify a range with the newest
# and oldest tested versions of CMake. 
cmake_minimum_required(VERSION 3.14...3.19)

# set version
set(version 1.0.0)

# This is your project statement. You should always list languages;
project(
    ModelTest
    VERSION ${version}
)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add other packages for cmake
include(FetchContent)

FetchContent_Declare(
    SEP COMPONENT Model
    GIT_REPOSITORY https://github.com/psu-powerlab/SEP.git
    GIT_TAG        main
)

FetchContent_MakeAvailable(SEP)

add_executable (tests
    main.cpp
)

target_link_libraries(tests SEP::Model)
target_include_directories(
    tests PUBLIC 
    ${SEP_INCLUDE_DIRS}
)