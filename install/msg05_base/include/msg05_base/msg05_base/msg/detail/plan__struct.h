// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'groups'
#include "msg05_base/msg/detail/group__struct.h"
// Member 'mission_area'
// Member 'mission_sub_area'
#include "msg05_base/msg/detail/rect__struct.h"
// Member 'targets'
#include "msg05_base/msg/detail/target__struct.h"
// Member 'formation'
#include "msg05_base/msg/detail/point_i16__struct.h"

/// Struct defined in msg/Plan in the package msg05_base.
typedef struct msg05_base__msg__Plan
{
  msg05_base__msg__Group__Sequence groups;
  uint8_t mission;
  uint8_t task;
  msg05_base__msg__Rect mission_area;
  msg05_base__msg__Rect mission_sub_area;
  msg05_base__msg__Target__Sequence targets;
  msg05_base__msg__PointI16__Sequence formation;
} msg05_base__msg__Plan;

// Struct for a sequence of msg05_base__msg__Plan.
typedef struct msg05_base__msg__Plan__Sequence
{
  msg05_base__msg__Plan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Plan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__PLAN__STRUCT_H_
