#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "packets_360::packets_360" for configuration "Debug"
set_property(TARGET packets_360::packets_360 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(packets_360::packets_360 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpackets_360d.so"
  IMPORTED_SONAME_DEBUG "libpackets_360d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS packets_360::packets_360 )
list(APPEND _IMPORT_CHECK_FILES_FOR_packets_360::packets_360 "${_IMPORT_PREFIX}/lib/libpackets_360d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
