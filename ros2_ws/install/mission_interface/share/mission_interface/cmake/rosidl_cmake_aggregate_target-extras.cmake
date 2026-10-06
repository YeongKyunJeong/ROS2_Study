# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target mission_interface::mission_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${mission_interface_TARGETS}.
if(mission_interface_TARGETS AND NOT TARGET mission_interface::mission_interface)
  add_library(mission_interface::mission_interface INTERFACE IMPORTED)
  set_target_properties(mission_interface::mission_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${mission_interface_TARGETS}")
endif()
