#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "variables_230::variables_230" for configuration "Debug"
set_property(TARGET variables_230::variables_230 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(variables_230::variables_230 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvariables_230d.so"
  IMPORTED_SONAME_DEBUG "libvariables_230d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS variables_230::variables_230 )
list(APPEND _IMPORT_CHECK_FILES_FOR_variables_230::variables_230 "${_IMPORT_PREFIX}/lib/libvariables_230d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
