// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/PlatformResult.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/PlatformResult in the package msg05_base.
typedef struct msg05_base__msg__PlatformResult
{
  std_msgs__msg__Bool result;
  uint8_t platform_id;
} msg05_base__msg__PlatformResult;

// Struct for a sequence of msg05_base__msg__PlatformResult.
typedef struct msg05_base__msg__PlatformResult__Sequence
{
  msg05_base__msg__PlatformResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__PlatformResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_RESULT__STRUCT_H_
