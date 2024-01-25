// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:msg/Rect.idl
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
#include "msg05_base/msg/detail/rect__struct.h"
#include "msg05_base/msg/detail/rect__functions.h"

bool msg05_base__msg__point_i16__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__point_i16__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__point_i16__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__point_i16__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__msg__rect__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[26];
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
    assert(strncmp("msg05_base.msg._rect.Rect", full_classname_dest, 25) == 0);
  }
  msg05_base__msg__Rect * ros_message = _ros_message;
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__point_i16__convert_from_py(field, &ros_message->start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end
    PyObject * field = PyObject_GetAttrString(_pymsg, "end");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__point_i16__convert_from_py(field, &ros_message->end)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__msg__rect__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rect */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.msg._rect");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rect");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__msg__Rect * ros_message = (msg05_base__msg__Rect *)raw_ros_message;
  {  // start
    PyObject * field = NULL;
    field = msg05_base__msg__point_i16__convert_to_py(&ros_message->start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end
    PyObject * field = NULL;
    field = msg05_base__msg__point_i16__convert_to_py(&ros_message->end);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
