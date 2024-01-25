# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/Details.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Details(type):
    """Metaclass of message 'Details'."""

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
                'msg05_base.msg.Details')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__details

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Details(metaclass=Metaclass_Details):
    """Message class 'Details'."""

    __slots__ = [
        '_task',
        '_mission_type',
        '_mission_status',
        '_action_type',
        '_speed',
    ]

    _fields_and_field_types = {
        'task': 'uint8',
        'mission_type': 'uint8',
        'mission_status': 'uint8',
        'action_type': 'uint8',
        'speed': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task = kwargs.get('task', int())
        self.mission_type = kwargs.get('mission_type', int())
        self.mission_status = kwargs.get('mission_status', int())
        self.action_type = kwargs.get('action_type', int())
        self.speed = kwargs.get('speed', int())

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
        if self.task != other.task:
            return False
        if self.mission_type != other.mission_type:
            return False
        if self.mission_status != other.mission_status:
            return False
        if self.action_type != other.action_type:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def mission_type(self):
        """Message field 'mission_type'."""
        return self._mission_type

    @mission_type.setter
    def mission_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_type' field must be an unsigned integer in [0, 255]"
        self._mission_type = value

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
    def action_type(self):
        """Message field 'action_type'."""
        return self._action_type

    @action_type.setter
    def action_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action_type' field must be an unsigned integer in [0, 255]"
        self._action_type = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed' field must be an unsigned integer in [0, 255]"
        self._speed = value
