// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from use_case_one:srv/Grouping.idl
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
#include "use_case_one/srv/detail/grouping__struct.h"
#include "use_case_one/srv/detail/grouping__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool use_case_one__srv__grouping__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("use_case_one.srv._grouping.Grouping_Request", full_classname_dest, 43) == 0);
  }
  use_case_one__srv__Grouping_Request * ros_message = _ros_message;
  {  // platform_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "platform_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->platform_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_leader
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_leader");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_leader = (Py_True == field);
    Py_DECREF(field);
  }
  {  // request_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_type");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->request_type = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // group_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_idx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * use_case_one__srv__grouping__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Grouping_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("use_case_one.srv._grouping");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Grouping_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  use_case_one__srv__Grouping_Request * ros_message = (use_case_one__srv__Grouping_Request *)raw_ros_message;
  {  // platform_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->platform_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "platform_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_leader
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_leader ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_leader", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_type
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->request_type, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->group_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_idx", field);
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
// #include "use_case_one/srv/detail/grouping__struct.h"
// already included above
// #include "use_case_one/srv/detail/grouping__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool use_case_one__srv__grouping__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("use_case_one.srv._grouping.Grouping_Response", full_classname_dest, 44) == 0);
  }
  use_case_one__srv__Grouping_Response * ros_message = _ros_message;
  {  // platform_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "platform_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->platform_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_leader
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_leader");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_leader = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reply_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "reply_type");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->reply_type = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // group_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_idx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * use_case_one__srv__grouping__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Grouping_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("use_case_one.srv._grouping");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Grouping_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  use_case_one__srv__Grouping_Response * ros_message = (use_case_one__srv__Grouping_Response *)raw_ros_message;
  {  // platform_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->platform_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "platform_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_leader
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_leader ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_leader", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reply_type
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->reply_type, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reply_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->group_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
