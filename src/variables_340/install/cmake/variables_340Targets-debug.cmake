#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "variables_340::variables_340" for configuration "Debug"
set_property(TARGET variables_340::variables_340 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(variables_340::variables_340 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvariables_340d.so"
  IMPORTED_SONAME_DEBUG "libvariables_340d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS variables_340::variables_340 )
list(APPEND _IMPORT_CHECK_FILES_FOR_variables_340::variables_340 "${_IMPORT_PREFIX}/lib/libvariables_340d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
