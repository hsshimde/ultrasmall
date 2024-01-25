// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Rect.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__RECT__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__RECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'end'
#include "msg05_base/msg/detail/point_i16__struct.h"

/// Struct defined in msg/Rect in the package msg05_base.
typedef struct msg05_base__msg__Rect
{
  msg05_base__msg__PointI16 start;
  msg05_base__msg__PointI16 end;
} msg05_base__msg__Rect;

// Struct for a sequence of msg05_base__msg__Rect.
typedef struct msg05_base__msg__Rect__Sequence
{
  msg05_base__msg__Rect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Rect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__RECT__STRUCT_H_
