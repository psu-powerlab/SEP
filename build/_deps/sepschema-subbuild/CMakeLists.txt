# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.18.4)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(sepschema-populate NONE)

include(ExternalProject)
ExternalProject_Add(sepschema-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://standards.ieee.org/content/dam/ieee-standards/standards/web/download/2030.5-2018_downloads.zip"
                    SOURCE_DIR          "/home/tslay/Dev/IEEE_2030-5_Resources/build/_deps/sepschema-src"
                    BINARY_DIR          "/home/tslay/Dev/IEEE_2030-5_Resources/build/_deps/sepschema-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


