// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Image in the package msg05_base.
typedef struct msg05_base__msg__Image
{
  uint8_t id;
  uint32_t timestamp;
  rosidl_runtime_c__uint8__Sequence data;
} msg05_base__msg__Image;

// Struct for a sequence of msg05_base__msg__Image.
typedef struct msg05_base__msg__Image__Sequence
{
  msg05_base__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__IMAGE__STRUCT_H_
