// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg05_base:msg/SiteInfo.idl
// generated code does not contain a copyright notice

#ifndef MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_H_
#define MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "msg05_base/msg/detail/point_i16__struct.h"

/// Struct defined in msg/SiteInfo in the package msg05_base.
typedef struct msg05_base__msg__SiteInfo
{
  msg05_base__msg__PointI16__Sequence points;
} msg05_base__msg__SiteInfo;

// Struct for a sequence of msg05_base__msg__SiteInfo.
typedef struct msg05_base__msg__SiteInfo__Sequence
{
  msg05_base__msg__SiteInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg05_base__msg__SiteInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG05_BASE__MSG__DETAIL__SITE_INFO__STRUCT_H_
