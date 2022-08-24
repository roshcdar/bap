#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "variables_360::variables_360" for configuration "Debug"
set_property(TARGET variables_360::variables_360 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(variables_360::variables_360 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvariables_360d.so"
  IMPORTED_SONAME_DEBUG "libvariables_360d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS variables_360::variables_360 )
list(APPEND _IMPORT_CHECK_FILES_FOR_variables_360::variables_360 "${_IMPORT_PREFIX}/lib/libvariables_360d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
