# You should always specify a range with the newest
# and oldest tested versions of CMake. 
cmake_minimum_required(VERSION 3.14...3.19)

# This is your project statement. You should always list languages;
project(
  IEEE2030-5
  VERSION 1.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find external packages for project
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        master
)

FetchContent_Declare(
  SEPSchema
  URL https://standards.ieee.org/content/dam/ieee-standards/standards/web/download/2030.5-2018_downloads.zip
)

# CMake 3.14+
FetchContent_MakeAvailable(googletest SEPSchema)

# Find preinstall packages
find_package(Boost REQUIRED)

add_subdirectory(src)

# include CMakePackageConfigHelpers macro
include(CMakePackageConfigHelpers)

# set version
set(version 1.1.0)

# generate the version file for the config file
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/IEEE2030-5.cmake"
  VERSION "${version}"
  COMPATIBILITY AnyNewerVersion
)

# create config file
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/IEEE2030-5.cmake"
  INSTALL_DESTINATION lib/cmake
  NO_CHECK_REQUIRED_COMPONENTS_MACRO
)

# install config files
install(FILES
          "${CMAKE_CURRENT_BINARY_DIR}/IEEE2030-5.cmake"
          "${CMAKE_CURRENT_BINARY_DIR}/IEEE2030-5.cmake"
        DESTINATION lib/cmake
)
