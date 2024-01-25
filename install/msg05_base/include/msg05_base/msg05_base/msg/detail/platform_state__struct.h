// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'actuator_state'
// Member 'low_power_mode'
// Member 'network_connection'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in msg/PlatformState in the package msg05_base.
typedef struct msg05_base__msg__PlatformState
{
  uint8_t platform_id;
  uint8_t group_id;
  std_msgs__msg__Bool actuator_state;
  std_msgs__msg__Bool low_power_mode;
  uint8_t battery_percentage;
  uint32_t timestamp;
  std_msgs__msg__Bool network_connection;
} msg05_base__msg__PlatformState;

// Struct for a sequence of msg05_base__msg__PlatformState.
typedef struct msg05_base__msg__PlatformState__Sequence
{
  msg05_base__msg__PlatformState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__PlatformState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__PLATFORM_STATE__STRUCT_H_
