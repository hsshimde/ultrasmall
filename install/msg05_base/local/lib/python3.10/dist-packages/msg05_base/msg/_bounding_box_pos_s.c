// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:msg/BoundingBoxPos.idl
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
#include "msg05_base/msg/detail/bounding_box_pos__struct.h"
#include "msg05_base/msg/detail/bounding_box_pos__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool msg05_base__msg__rect__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__rect__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__vector3_i16__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__vector3_i16__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__msg__bounding_box_pos__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("msg05_base.msg._bounding_box_pos.BoundingBoxPos", full_classname_dest, 47) == 0);
  }
  msg05_base__msg__BoundingBoxPos * ros_message = _ros_message;
  {  // probability_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "probability_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->probability_percent = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__rect__convert_from_py(field, &ros_message->bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__vector3_i16__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // class_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->class_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__msg__bounding_box_pos__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BoundingBoxPos */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.msg._bounding_box_pos");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BoundingBoxPos");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__msg__BoundingBoxPos * ros_message = (msg05_base__msg__BoundingBoxPos *)raw_ros_message;
  {  // probability_percent
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->probability_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "probability_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox
    PyObject * field = NULL;
    field = msg05_base__msg__rect__convert_to_py(&ros_message->bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = msg05_base__msg__vector3_i16__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->class_id.data,
      strlen(ros_message->class_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
