# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nuriho-interfaces_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nuriho-interfaces_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nuriho-interfaces_FOUND FALSE)
  elseif(NOT nuriho-interfaces_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nuriho-interfaces_FOUND FALSE)
  endif()
  return()
endif()
set(_nuriho-interfaces_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nuriho-interfaces_FIND_QUIETLY)
  message(STATUS "Found nuriho-interfaces: 0.0.0 (${nuriho-interfaces_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nuriho-interfaces' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT nuriho-interfaces_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nuriho-interfaces_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nuriho-interfaces_DIR}/${_extra}")
endforeach()
