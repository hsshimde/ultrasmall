// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/BoundingBoxPos.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bbox'
#include "msg05_base/msg/detail/rect__struct.h"
// Member 'position'
#include "msg05_base/msg/detail/vector3_i16__struct.h"
// Member 'class_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BoundingBoxPos in the package msg05_base.
typedef struct msg05_base__msg__BoundingBoxPos
{
  int8_t probability_percent;
  msg05_base__msg__Rect bbox;
  msg05_base__msg__Vector3I16 position;
  rosidl_runtime_c__String class_id;
  uint32_t time;
} msg05_base__msg__BoundingBoxPos;

// Struct for a sequence of msg05_base__msg__BoundingBoxPos.
typedef struct msg05_base__msg__BoundingBoxPos__Sequence
{
  msg05_base__msg__BoundingBoxPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__BoundingBoxPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__BOUNDING_BOX_POS__STRUCT_H_
