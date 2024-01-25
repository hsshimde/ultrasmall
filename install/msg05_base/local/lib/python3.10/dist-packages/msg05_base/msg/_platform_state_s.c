// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:msg/PlatformState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "msg05_base/msg/detail/platform_state__struct.h"
#include "msg05_base/msg/detail/platform_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__bool__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__bool__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__bool__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__bool__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__bool__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__bool__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__msg__platform_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("msg05_base.msg._platform_state.PlatformState", full_classname_dest, 44) == 0);
  }
  msg05_base__msg__PlatformState * ros_message = _ros_message;
  {  // platform_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "platform_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->platform_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // group_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // actuator_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_state");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__bool__convert_from_py(field, &ros_message->actuator_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // low_power_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_power_mode");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__bool__convert_from_py(field, &ros_message->low_power_mode)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_percentage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // network_connection
    PyObject * field = PyObject_GetAttrString(_pymsg, "network_connection");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__bool__convert_from_py(field, &ros_message->network_connection)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__msg__platform_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlatformState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.msg._platform_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlatformState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__msg__PlatformState * ros_message = (msg05_base__msg__PlatformState *)raw_ros_message;
  {  // platform_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->platform_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "platform_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->group_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_state
    PyObject * field = NULL;
    field = std_msgs__msg__bool__convert_to_py(&ros_message->actuator_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_power_mode
    PyObject * field = NULL;
    field = std_msgs__msg__bool__convert_to_py(&ros_message->low_power_mode);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_power_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percentage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // network_connection
    PyObject * field = NULL;
    field = std_msgs__msg__bool__convert_to_py(&ros_message->network_connection);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "network_connection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
