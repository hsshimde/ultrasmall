# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/Rect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rect(type):
    """Metaclass of message 'Rect'."""

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
                'msg05_base.msg.Rect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rect
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rect
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rect
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rect
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rect

            from msg05_base.msg import PointI16
            if PointI16.__class__._TYPE_SUPPORT is None:
                PointI16.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rect(metaclass=Metaclass_Rect):
    """Message class 'Rect'."""

    __slots__ = [
        '_start',
        '_end',
    ]

    _fields_and_field_types = {
        'start': 'msg05_base/PointI16',
        'end': 'msg05_base/PointI16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PointI16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PointI16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from msg05_base.msg import PointI16
        self.start = kwargs.get('start', PointI16())
        from msg05_base.msg import PointI16
        self.end = kwargs.get('end', PointI16())

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
        if self.start != other.start:
            return False
        if self.end != other.end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from msg05_base.msg import PointI16
            assert \
                isinstance(value, PointI16), \
                "The 'start' field must be a sub message of type 'PointI16'"
        self._start = value

    @builtins.property
    def end(self):
        """Message field 'end'."""
        return self._end

    @end.setter
    def end(self, value):
        if __debug__:
            from msg05_base.msg import PointI16
            assert \
                isinstance(value, PointI16), \
                "The 'end' field must be a sub message of type 'PointI16'"
        self._end = value
