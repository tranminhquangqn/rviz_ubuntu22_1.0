#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_common::rviz_common" for configuration ""
set_property(TARGET rviz_common::rviz_common APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_common::rviz_common PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librviz_common.so"
  IMPORTED_SONAME_NOCONFIG "librviz_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_common::rviz_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_common::rviz_common "${_IMPORT_PREFIX}/lib/librviz_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
