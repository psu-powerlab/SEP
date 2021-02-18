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
find_package (XercesC REQUIRED)
find_package(Boost REQUIRED filesystem)

FetchContent_Declare(
    SEP
    GIT_REPOSITORY https://github.com/psu-powerlab/SEP.git
    GIT_TAG        main
)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        master
)

FetchContent_MakeAvailable(SEP googletest)

add_executable (tests
    main.cpp
)

target_link_libraries(tests gtest gtest_main SEP::Model SEP::XML XercesC::XercesC Boost::filesystem Boost::boost)
target_include_directories(
    tests PUBLIC 
    ${SEP_INCLUDE_DIRS}
    ${XercesC_INCLUDE_DIR}
    ${Boost_INCLUDE_DIRS}
    ${googletest_INCLUDE_DIRS}
)