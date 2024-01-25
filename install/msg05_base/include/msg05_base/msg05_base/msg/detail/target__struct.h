// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_H_

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
#include "msg05_base/msg/detail/vector3_f32__struct.h"

/// Struct defined in msg/Target in the package msg05_base.
typedef struct msg05_base__msg__Target
{
  uint8_t action;
  msg05_base__msg__Vector3F32 position;
  int16_t theta;
} msg05_base__msg__Target;

// Struct for a sequence of msg05_base__msg__Target.
typedef struct msg05_base__msg__Target__Sequence
{
  msg05_base__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__TARGET__STRUCT_H_
