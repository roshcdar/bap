#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "packets_230_340::packets_230_340" for configuration "Release"
set_property(TARGET packets_230_340::packets_230_340 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(packets_230_340::packets_230_340 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpackets_230_340.so"
  IMPORTED_SONAME_RELEASE "libpackets_230_340.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS packets_230_340::packets_230_340 )
list(APPEND _IMPORT_CHECK_FILES_FOR_packets_230_340::packets_230_340 "${_IMPORT_PREFIX}/lib/libpackets_230_340.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
