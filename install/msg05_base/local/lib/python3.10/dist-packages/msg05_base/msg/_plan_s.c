// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:msg/Plan.idl
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
#include "msg05_base/msg/detail/plan__struct.h"
#include "msg05_base/msg/detail/plan__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "msg05_base/msg/detail/group__functions.h"
#include "msg05_base/msg/detail/point_i16__functions.h"
#include "msg05_base/msg/detail/target__functions.h"
// end nested array functions include
bool msg05_base__msg__group__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__group__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__rect__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__rect__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__rect__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__rect__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__target__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__target__convert_to_py(void * raw_ros_message);
bool msg05_base__msg__point_i16__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__point_i16__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__msg__plan__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("msg05_base.msg._plan.Plan", full_classname_dest, 25) == 0);
  }
  msg05_base__msg__Plan * ros_message = _ros_message;
  {  // groups
    PyObject * field = PyObject_GetAttrString(_pymsg, "groups");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'groups'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!msg05_base__msg__Group__Sequence__init(&(ros_message->groups), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create msg05_base__msg__Group__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    msg05_base__msg__Group * dest = ros_message->groups.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!msg05_base__msg__group__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // mission
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // task
    PyObject * field = PyObject_GetAttrString(_pymsg, "task");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // mission_sub_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_sub_area");
    if (!field) {
      return false;
    }
    if (!msg05_base__msg__rect__convert_from_py(field, &ros_message->mission_sub_area)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // targets
    PyObject * field = PyObject_GetAttrString(_pymsg, "targets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'targets'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!msg05_base__msg__Target__Sequence__init(&(ros_message->targets), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create msg05_base__msg__Target__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    msg05_base__msg__Target * dest = ros_message->targets.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!msg05_base__msg__target__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // formation
    PyObject * field = PyObject_GetAttrString(_pymsg, "formation");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'formation'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!msg05_base__msg__PointI16__Sequence__init(&(ros_message->formation), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create msg05_base__msg__PointI16__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    msg05_base__msg__PointI16 * dest = ros_message->formation.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!msg05_base__msg__point_i16__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__msg__plan__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Plan */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.msg._plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Plan");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__msg__Plan * ros_message = (msg05_base__msg__Plan *)raw_ros_message;
  {  // groups
    PyObject * field = NULL;
    size_t size = ros_message->groups.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    msg05_base__msg__Group * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->groups.data[i]);
      PyObject * pyitem = msg05_base__msg__group__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "groups", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task", field);
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
  {  // mission_sub_area
    PyObject * field = NULL;
    field = msg05_base__msg__rect__convert_to_py(&ros_message->mission_sub_area);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_sub_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // targets
    PyObject * field = NULL;
    size_t size = ros_message->targets.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    msg05_base__msg__Target * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->targets.data[i]);
      PyObject * pyitem = msg05_base__msg__target__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "targets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // formation
    PyObject * field = NULL;
    size_t size = ros_message->formation.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    msg05_base__msg__PointI16 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->formation.data[i]);
      PyObject * pyitem = msg05_base__msg__point_i16__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "formation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
