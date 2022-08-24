#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "variables_340_360::variables_340_360" for configuration "Debug"
set_property(TARGET variables_340_360::variables_340_360 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(variables_340_360::variables_340_360 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvariables_340_360d.so"
  IMPORTED_SONAME_DEBUG "libvariables_340_360d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS variables_340_360::variables_340_360 )
list(APPEND _IMPORT_CHECK_FILES_FOR_variables_340_360::variables_340_360 "${_IMPORT_PREFIX}/lib/libvariables_340_360d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
