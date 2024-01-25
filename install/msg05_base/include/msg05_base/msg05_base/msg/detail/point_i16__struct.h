// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/PointI16.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__POINT_I16__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__POINT_I16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointI16 in the package msg05_base.
typedef struct msg05_base__msg__PointI16
{
  int16_t x;
  int16_t y;
} msg05_base__msg__PointI16;

// Struct for a sequence of msg05_base__msg__PointI16.
typedef struct msg05_base__msg__PointI16__Sequence
{
  msg05_base__msg__PointI16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__PointI16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__POINT_I16__STRUCT_H_
