// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/SensorInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "msg05_base/msg/detail/platform_state__struct.h"
// Member 'bbox'
#include "msg05_base/msg/detail/bounding_box_poses__struct.h"
// Member 'driving'
#include "msg05_base/msg/detail/driving_pose__struct.h"

/// Struct defined in msg/SensorInfo in the package msg05_base.
typedef struct msg05_base__msg__SensorInfo
{
  uint8_t id;
  msg05_base__msg__PlatformState state;
  msg05_base__msg__BoundingBoxPoses bbox;
  msg05_base__msg__DrivingPose driving;
} msg05_base__msg__SensorInfo;

// Struct for a sequence of msg05_base__msg__SensorInfo.
typedef struct msg05_base__msg__SensorInfo__Sequence
{
  msg05_base__msg__SensorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__SensorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__SENSOR_INFO__STRUCT_H_
