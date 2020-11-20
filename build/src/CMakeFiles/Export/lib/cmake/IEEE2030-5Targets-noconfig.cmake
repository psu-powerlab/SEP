#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "IEEE2030-5" for configuration ""
set_property(TARGET IEEE2030-5 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(IEEE2030-5 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libIEEE2030-5.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS IEEE2030-5 )
list(APPEND _IMPORT_CHECK_FILES_FOR_IEEE2030-5 "${_IMPORT_PREFIX}/lib/libIEEE2030-5.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
