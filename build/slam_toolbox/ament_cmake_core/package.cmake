set(_AMENT_PACKAGE_NAME "slam_toolbox")
set(slam_toolbox_VERSION "2.4.0")
set(slam_toolbox_MAINTAINER "Steve Macenski <stevenmacenski@gmail.com>")
set(slam_toolbox_BUILD_DEPENDS "pluginlib" "eigen" "message_filters" "nav_msgs" "rclcpp" "sensor_msgs" "tf2_ros" "tf2" "tf2_sensor_msgs" "visualization_msgs" "std_srvs" "boost" "interactive_markers" "std_msgs" "suitesparse" "liblapack-dev" "libceres-dev" "tf2_geometry_msgs" "tbb" "libqt5-core" "libqt5-widgets" "qtbase5-dev" "nav2_map_server" "builtin_interfaces" "rosidl_default_generators" "rviz_common" "rviz_default_plugins" "rviz_ogre_vendor" "rviz_rendering")
set(slam_toolbox_BUILDTOOL_DEPENDS "ament_cmake")
set(slam_toolbox_BUILD_EXPORT_DEPENDS "rviz_common" "rviz_default_plugins" "rviz_ogre_vendor" "rviz_rendering")
set(slam_toolbox_BUILDTOOL_EXPORT_DEPENDS )
set(slam_toolbox_EXEC_DEPENDS "eigen" "pluginlib" "message_filters" "nav_msgs" "rclcpp" "sensor_msgs" "tf2" "tf2_ros" "tf2_sensor_msgs" "visualization_msgs" "std_srvs" "boost" "interactive_markers" "std_msgs" "suitesparse" "liblapack-dev" "libceres-dev" "tf2_geometry_msgs" "tbb" "libqt5-core" "libqt5-widgets" "nav2_common" "nav2_map_server" "builtin_interfaces" "rosidl_default_generators" "libqt5-core" "libqt5-gui" "libqt5-opengl" "libqt5-widgets" "rviz_common" "rviz_default_plugins" "rviz_ogre_vendor" "rviz_rendering")
set(slam_toolbox_TEST_DEPENDS "ament_cmake_gtest" "launch" "launch_testing" "ament_cmake_flake8" "ament_cmake_cpplint" "ament_cmake_uncrustify" "ament_lint_auto")
set(slam_toolbox_GROUP_DEPENDS )
set(slam_toolbox_MEMBER_OF_GROUPS "rosidl_interface_packages")
set(slam_toolbox_DEPRECATED "")
set(slam_toolbox_EXPORT_TAGS)
list(APPEND slam_toolbox_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND slam_toolbox_EXPORT_TAGS "<slam_toolbox plugin=\"solver_plugins.xml\"/>")
list(APPEND slam_toolbox_EXPORT_TAGS "<rviz_common plugin=\"rviz_plugins.xml\"/>")
