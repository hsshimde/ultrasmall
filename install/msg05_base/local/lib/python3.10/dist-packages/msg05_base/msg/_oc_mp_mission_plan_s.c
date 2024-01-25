// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:msg/OcMpMissionPlan.idl
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
#include "msg05_base/msg/detail/oc_mp_mission_plan__struct.h"
#include "msg05_base/msg/detail/oc_mp_mission_plan__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool msg05_base__msg__rect__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__rect__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__msg__oc_mp_mission_plan__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("msg05_base.msg._oc_mp_mission_plan.OcMpMissionPlan", full_classname_dest, 50) == 0);
  }
  msg05_base__msg__OcMpMissionPlan * ros_message = _ros_message;
  {  // mission_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mission_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_area");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__rect__convert_from_py(field, &ros_message->mission_area)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__msg__oc_mp_mission_plan__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OcMpMissionPlan */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.msg._oc_mp_mission_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OcMpMissionPlan");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__msg__OcMpMissionPlan * ros_message = (msg05_base__msg__OcMpMissionPlan *)raw_ros_message;
  {  // mission_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission_name.data,
      strlen(ros_message->mission_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_area
    PyObject * field = NULL;
    field = msg05_base__msg__rect__convert_to_py(&ros_message->mission_area);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
