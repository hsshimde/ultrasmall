# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_use_case_one_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED use_case_one_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(use_case_one_FOUND FALSE)
  elseif(NOT use_case_one_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(use_case_one_FOUND FALSE)
  endif()
  return()
endif()
set(_use_case_one_CONFIG_INCLUDED TRUE)

# output package information
if(NOT use_case_one_FIND_QUIETLY)
  message(STATUS "Found use_case_one: 0.0.0 (${use_case_one_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'use_case_one' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${use_case_one_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(use_case_one_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${use_case_one_DIR}/${_extra}")
endforeach()
