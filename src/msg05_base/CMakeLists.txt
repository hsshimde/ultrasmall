cmake_minimum_required(VERSION 3.8)
project(msg05_base)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rosidl_typesupport_c REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

set(msg_files
        "msg/Vector3F32.msg"
        "msg/Vector4F32.msg"
        "msg/Vector3I16.msg"
        "msg/Error.msg"
        "msg/Details.msg"
        "msg/MissionResult.msg"
        "msg/MissionResults.msg"
        "msg/MissionResultsSequence.msg"
        "msg/PointI16.msg"
        "msg/Rect.msg"
        "msg/PlatformRegistration.msg"
        "msg/Group.msg"
        "msg/Groups.msg"
        "msg/PlatformState.msg"
        "msg/SiteInfo.msg"
        "msg/Target.msg"
        "msg/Plan.msg"
        "msg/GroupStatusCmd.msg"
        "msg/DrivingPose.msg"
        "msg/SendingImagePI.msg"
        "msg/DrivingTarget.msg"
        "msg/BoundingBoxPose.msg"
        "msg/BoundingBoxPoses.msg"
        "msg/Image.msg"
        "msg/SensorInfo.msg"
        "msg/SensorInfoSequence.msg"
        "msg/OrderTopic.msg"
        "msg/OcMpMissionPlan.msg"
        "msg/SwarmGroups.msg"
        "msg/AllocSwarmPlanResult.msg"
        "msg/PlatformResult.msg"
)

set(srv_files
  "srv/PlatformRegistrationInfo.srv"
  "srv/OrderService.srv"
  "srv/AllocSwarmGroups.srv"
#  "srv/.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
        ${msg_files}
        ${srv_files}
        DEPENDENCIES std_msgs nav_msgs
)

#add_executable(platform_registration_info_server src/PlatformRegistrationInfo_server.cpp)
#add_executable(platform_registration_info_client src/PlatformRegistrationInfo_client.cpp)
#ament_target_dependencies(platform_registration_info_server rclcpp )
#ament_target_dependencies(platform_registration_info_client rclcpp )

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
