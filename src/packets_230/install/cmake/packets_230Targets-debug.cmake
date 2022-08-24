#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "packets_230::packets_230" for configuration "Debug"
set_property(TARGET packets_230::packets_230 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(packets_230::packets_230 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpackets_230d.so"
  IMPORTED_SONAME_DEBUG "libpackets_230d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS packets_230::packets_230 )
list(APPEND _IMPORT_CHECK_FILES_FOR_packets_230::packets_230 "${_IMPORT_PREFIX}/lib/libpackets_230d.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
