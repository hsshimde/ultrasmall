// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Vector3F32.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__VECTOR3_F32__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__VECTOR3_F32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vector3F32 in the package msg05_base.
typedef struct msg05_base__msg__Vector3F32
{
  float x;
  float y;
  float z;
} msg05_base__msg__Vector3F32;

// Struct for a sequence of msg05_base__msg__Vector3F32.
typedef struct msg05_base__msg__Vector3F32__Sequence
{
  msg05_base__msg__Vector3F32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Vector3F32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__VECTOR3_F32__STRUCT_H_
