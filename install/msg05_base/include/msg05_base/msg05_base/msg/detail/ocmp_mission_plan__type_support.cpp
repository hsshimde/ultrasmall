// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg05_base:msg/OCMPMissionPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg05_base/msg/detail/ocmp_mission_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg05_base
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OCMPMissionPlan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg05_base::msg::OCMPMissionPlan(_init);
}

void OCMPMissionPlan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg05_base::msg::OCMPMissionPlan *>(message_memory);
  typed_message->~OCMPMissionPlan();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OCMPMissionPlan_message_member_array[2] = {
  {
    "mission_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::OCMPMissionPlan, mission_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mission_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg05_base::msg::Rect>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg05_base::msg::OCMPMissionPlan, mission_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OCMPMissionPlan_message_members = {
  "msg05_base::msg",  // message namespace
  "OCMPMissionPlan",  // message name
  2,  // number of fields
  sizeof(msg05_base::msg::OCMPMissionPlan),
  OCMPMissionPlan_message_member_array,  // message members
  OCMPMissionPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  OCMPMissionPlan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OCMPMissionPlan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OCMPMissionPlan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace msg05_base


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg05_base::msg::OCMPMissionPlan>()
{
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::OCMPMissionPlan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg05_base, msg, OCMPMissionPlan)() {
  return &::msg05_base::msg::rosidl_typesupport_introspection_cpp::OCMPMissionPlan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
