// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/PlatformRegistration.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/PlatformRegistration in the package msg05_base.
typedef struct msg05_base__msg__PlatformRegistration
{
  uint8_t id;
  std_msgs__msg__String ip;
  uint8_t platform_type;
} msg05_base__msg__PlatformRegistration;

// Struct for a sequence of msg05_base__msg__PlatformRegistration.
typedef struct msg05_base__msg__PlatformRegistration__Sequence
{
  msg05_base__msg__PlatformRegistration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__PlatformRegistration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_REGISTRATION__STRUCT_H_
