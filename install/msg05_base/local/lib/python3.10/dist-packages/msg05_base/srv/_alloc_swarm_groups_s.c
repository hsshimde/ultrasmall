// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg05_base:srv/AllocSwarmGroups.idl
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
#include "msg05_base/srv/detail/alloc_swarm_groups__struct.h"
#include "msg05_base/srv/detail/alloc_swarm_groups__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "msg05_base/msg/detail/swarm_groups__functions.h"
// end nested array functions include
bool msg05_base__msg__swarm_groups__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * msg05_base__msg__swarm_groups__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__srv__alloc_swarm_groups__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("msg05_base.srv._alloc_swarm_groups.AllocSwarmGroups_Request", full_classname_dest, 59) == 0);
  }
  msg05_base__srv__AllocSwarmGroups_Request * ros_message = _ros_message;
  {  // swarmgroups
    PyObject * field = PyObject_GetAttrString(_pymsg, "swarmgroups");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'swarmgroups'");
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
    if (!msg05_base__msg__SwarmGroups__Sequence__init(&(ros_message->swarmgroups), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create msg05_base__msg__SwarmGroups__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    msg05_base__msg__SwarmGroups * dest = ros_message->swarmgroups.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!msg05_base__msg__swarm_groups__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * msg05_base__srv__alloc_swarm_groups__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AllocSwarmGroups_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.srv._alloc_swarm_groups");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AllocSwarmGroups_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__srv__AllocSwarmGroups_Request * ros_message = (msg05_base__srv__AllocSwarmGroups_Request *)raw_ros_message;
  {  // swarmgroups
    PyObject * field = NULL;
    size_t size = ros_message->swarmgroups.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    msg05_base__msg__SwarmGroups * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->swarmgroups.data[i]);
      PyObject * pyitem = msg05_base__msg__swarm_groups__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "swarmgroups", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "msg05_base/srv/detail/alloc_swarm_groups__struct.h"
// already included above
// #include "msg05_base/srv/detail/alloc_swarm_groups__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__bool__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__bool__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg05_base__srv__alloc_swarm_groups__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("msg05_base.srv._alloc_swarm_groups.AllocSwarmGroups_Response", full_classname_dest, 60) == 0);
  }
  msg05_base__srv__AllocSwarmGroups_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__bool__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg05_base__srv__alloc_swarm_groups__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AllocSwarmGroups_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg05_base.srv._alloc_swarm_groups");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AllocSwarmGroups_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg05_base__srv__AllocSwarmGroups_Response * ros_message = (msg05_base__srv__AllocSwarmGroups_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = std_msgs__msg__bool__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
