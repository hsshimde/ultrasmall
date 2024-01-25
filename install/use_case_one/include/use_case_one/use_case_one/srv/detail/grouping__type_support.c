// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from use_case_one:srv/Grouping.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "use_case_one/srv/detail/grouping__rosidl_typesupport_introspection_c.h"
#include "use_case_one/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "use_case_one/srv/detail/grouping__functions.h"
#include "use_case_one/srv/detail/grouping__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  use_case_one__srv__Grouping_Request__init(message_memory);
}

void use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_fini_function(void * message_memory)
{
  use_case_one__srv__Grouping_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_member_array[4] = {
  {
    "platform_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Request, platform_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_leader",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Request, is_leader),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Request, request_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Request, group_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_members = {
  "use_case_one__srv",  // message namespace
  "Grouping_Request",  // message name
  4,  // number of fields
  sizeof(use_case_one__srv__Grouping_Request),
  use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_member_array,  // message members
  use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_type_support_handle = {
  0,
  &use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_use_case_one
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Request)() {
  if (!use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_type_support_handle.typesupport_identifier) {
    use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &use_case_one__srv__Grouping_Request__rosidl_typesupport_introspection_c__Grouping_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "use_case_one/srv/detail/grouping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "use_case_one/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "use_case_one/srv/detail/grouping__functions.h"
// already included above
// #include "use_case_one/srv/detail/grouping__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  use_case_one__srv__Grouping_Response__init(message_memory);
}

void use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_fini_function(void * message_memory)
{
  use_case_one__srv__Grouping_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_member_array[4] = {
  {
    "platform_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Response, platform_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_leader",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Response, is_leader),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reply_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Response, reply_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(use_case_one__srv__Grouping_Response, group_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_members = {
  "use_case_one__srv",  // message namespace
  "Grouping_Response",  // message name
  4,  // number of fields
  sizeof(use_case_one__srv__Grouping_Response),
  use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_member_array,  // message members
  use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_type_support_handle = {
  0,
  &use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_use_case_one
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Response)() {
  if (!use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_type_support_handle.typesupport_identifier) {
    use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &use_case_one__srv__Grouping_Response__rosidl_typesupport_introspection_c__Grouping_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "use_case_one/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "use_case_one/srv/detail/grouping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_members = {
  "use_case_one__srv",  // service namespace
  "Grouping",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_Request_message_type_support_handle,
  NULL  // response message
  // use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_Response_message_type_support_handle
};

static rosidl_service_type_support_t use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_type_support_handle = {
  0,
  &use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_use_case_one
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping)() {
  if (!use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_type_support_handle.typesupport_identifier) {
    use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, use_case_one, srv, Grouping_Response)()->data;
  }

  return &use_case_one__srv__detail__grouping__rosidl_typesupport_introspection_c__Grouping_service_type_support_handle;
}
