#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "variables_340::variables_340" for configuration "Release"
set_property(TARGET variables_340::variables_340 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(variables_340::variables_340 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libvariables_340.so"
  IMPORTED_SONAME_RELEASE "libvariables_340.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS variables_340::variables_340 )
list(APPEND _IMPORT_CHECK_FILES_FOR_variables_340::variables_340 "${_IMPORT_PREFIX}/lib/libvariables_340.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
