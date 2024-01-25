# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/GroupStatusCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GroupStatusCmd(type):
    """Metaclass of message 'GroupStatusCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg05_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg05_base.msg.GroupStatusCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__group_status_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__group_status_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__group_status_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__group_status_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__group_status_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GroupStatusCmd(metaclass=Metaclass_GroupStatusCmd):
    """Message class 'GroupStatusCmd'."""

    __slots__ = [
        '_group_id',
        '_mission_status',
        '_task',
    ]

    _fields_and_field_types = {
        'group_id': 'uint8',
        'mission_status': 'uint8',
        'task': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_id = kwargs.get('group_id', int())
        self.mission_status = kwargs.get('mission_status', int())
        self.task = kwargs.get('task', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.group_id != other.group_id:
            return False
        if self.mission_status != other.mission_status:
            return False
        if self.task != other.task:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group_id(self):
        """Message field 'group_id'."""
        return self._group_id

    @group_id.setter
    def group_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'group_id' field must be an unsigned integer in [0, 255]"
        self._group_id = value

    @builtins.property
    def mission_status(self):
        """Message field 'mission_status'."""
        return self._mission_status

    @mission_status.setter
    def mission_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_status' field must be an unsigned integer in [0, 255]"
        self._mission_status = value

    @builtins.property
    def task(self):
        """Message field 'task'."""
        return self._task

    @task.setter
    def task(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task' field must be an unsigned integer in [0, 255]"
        self._task = value
