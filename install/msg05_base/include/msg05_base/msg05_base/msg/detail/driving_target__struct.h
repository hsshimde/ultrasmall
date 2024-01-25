// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/DrivingTarget.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "msg05_base/msg/detail/driving_pose__struct.h"
// Member 'linear'
// Member 'angular'
#include "msg05_base/msg/detail/vector3_f32__struct.h"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__struct.h"

/// Struct defined in msg/DrivingTarget in the package msg05_base.
typedef struct msg05_base__msg__DrivingTarget
{
  msg05_base__msg__DrivingPose pose;
  msg05_base__msg__Vector3F32 linear;
  msg05_base__msg__Vector3F32 angular;
  msg05_base__msg__PointI16__Sequence formation;
} msg05_base__msg__DrivingTarget;

// Struct for a sequence of msg05_base__msg__DrivingTarget.
typedef struct msg05_base__msg__DrivingTarget__Sequence
{
  msg05_base__msg__DrivingTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__DrivingTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_TARGET__STRUCT_H_
