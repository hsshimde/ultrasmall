// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg05_base:srv/OrderService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg05_base/srv/detail/order_service__rosidl_typesupport_introspection_c.h"
#include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg05_base/srv/detail/order_service__functions.h"
#include "msg05_base/srv/detail/order_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__srv__OrderService_Request__init(message_memory);
}

void msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_fini_function(void * message_memory)
{
  msg05_base__srv__OrderService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_member_array[1] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__srv__OrderService_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_members = {
  "msg05_base__srv",  // message namespace
  "OrderService_Request",  // message name
  1,  // number of fields
  sizeof(msg05_base__srv__OrderService_Request),
  msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_member_array,  // message members
  msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_type_support_handle = {
  0,
  &msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Request)() {
  if (!msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_type_support_handle.typesupport_identifier) {
    msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__srv__OrderService_Request__rosidl_typesupport_introspection_c__OrderService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg05_base/srv/detail/order_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg05_base/srv/detail/order_service__functions.h"
// already included above
// #include "msg05_base/srv/detail/order_service__struct.h"


// Include directives for member types
// Member `result`
#include "std_msgs/msg/bool.h"
// Member `result`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg05_base__srv__OrderService_Response__init(message_memory);
}

void msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_fini_function(void * message_memory)
{
  msg05_base__srv__OrderService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base__srv__OrderService_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_members = {
  "msg05_base__srv",  // message namespace
  "OrderService_Response",  // message name
  1,  // number of fields
  sizeof(msg05_base__srv__OrderService_Response),
  msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_member_array,  // message members
  msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_type_support_handle = {
  0,
  &msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Response)() {
  msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_type_support_handle.typesupport_identifier) {
    msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg05_base__srv__OrderService_Response__rosidl_typesupport_introspection_c__OrderService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg05_base/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg05_base/srv/detail/order_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_members = {
  "msg05_base__srv",  // service namespace
  "OrderService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_Request_message_type_support_handle,
  NULL  // response message
  // msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_type_support_handle = {
  0,
  &msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg05_base
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService)() {
  if (!msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_type_support_handle.typesupport_identifier) {
    msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg05_base, srv, OrderService_Response)()->data;
  }

  return &msg05_base__srv__detail__order_service__rosidl_typesupport_introspection_c__OrderService_service_type_support_handle;
}
