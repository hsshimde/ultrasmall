// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/DrivingPose.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__struct.h"
// Member 'orientation'
#include "msg05_base/msg/detail/vector4_f32__struct.h"

/// Struct defined in msg/DrivingPose in the package msg05_base.
typedef struct msg05_base__msg__DrivingPose
{
  uint8_t id;
  uint32_t timestamp;
  msg05_base__msg__Vector3I16 position;
  msg05_base__msg__Vector4F32 orientation;
} msg05_base__msg__DrivingPose;

// Struct for a sequence of msg05_base__msg__DrivingPose.
typedef struct msg05_base__msg__DrivingPose__Sequence
{
  msg05_base__msg__DrivingPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__DrivingPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__DRIVING_POSE__STRUCT_H_
