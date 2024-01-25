// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Details.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Details in the package msg05_base.
typedef struct msg05_base__msg__Details
{
  uint8_t task;
  uint8_t mission_type;
  uint8_t mission_status;
  uint8_t action_type;
  uint8_t speed;
} msg05_base__msg__Details;

// Struct for a sequence of msg05_base__msg__Details.
typedef struct msg05_base__msg__Details__Sequence
{
  msg05_base__msg__Details * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Details__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__DETAILS__STRUCT_H_
