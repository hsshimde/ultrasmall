// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice

#ifndef USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_H_
#define USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Grouping in the package use_case_one.
typedef struct use_case_one__srv__Grouping_Request
{
  int32_t platform_id;
  bool is_leader;
  uint8_t request_type;
  int32_t group_idx;
} use_case_one__srv__Grouping_Request;

// Struct for a sequence of use_case_one__srv__Grouping_Request.
typedef struct use_case_one__srv__Grouping_Request__Sequence
{
  use_case_one__srv__Grouping_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} use_case_one__srv__Grouping_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Grouping in the package use_case_one.
typedef struct use_case_one__srv__Grouping_Response
{
  int32_t platform_id;
  bool is_leader;
  uint8_t reply_type;
  int32_t group_idx;
} use_case_one__srv__Grouping_Response;

// Struct for a sequence of use_case_one__srv__Grouping_Response.
typedef struct use_case_one__srv__Grouping_Response__Sequence
{
  use_case_one__srv__Grouping_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} use_case_one__srv__Grouping_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USE_CASE_ONE__SRV__DETAIL__GROUPING__STRUCT_H_
