// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/BoundingBoxPoses.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "msg05_base/msg/detail/bounding_box_pos__struct.h"

/// Struct defined in msg/BoundingBoxPoses in the package msg05_base.
typedef struct msg05_base__msg__BoundingBoxPoses
{
  uint8_t id;
  uint32_t header_time;
  uint32_t image_header_time;
  msg05_base__msg__BoundingBoxPos__Sequence data;
} msg05_base__msg__BoundingBoxPoses;

// Struct for a sequence of msg05_base__msg__BoundingBoxPoses.
typedef struct msg05_base__msg__BoundingBoxPoses__Sequence
{
  msg05_base__msg__BoundingBoxPoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__BoundingBoxPoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POSES__STRUCT_H_
