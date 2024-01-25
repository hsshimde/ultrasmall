# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/BoundingBoxPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoundingBoxPos(type):
    """Metaclass of message 'BoundingBoxPos'."""

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
                'msg05_base.msg.BoundingBoxPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bounding_box_pos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bounding_box_pos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bounding_box_pos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bounding_box_pos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bounding_box_pos

            from msg05_base.msg import Rect
            if Rect.__class__._TYPE_SUPPORT is None:
                Rect.__class__.__import_type_support__()

            from msg05_base.msg import Vector3I16
            if Vector3I16.__class__._TYPE_SUPPORT is None:
                Vector3I16.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoundingBoxPos(metaclass=Metaclass_BoundingBoxPos):
    """Message class 'BoundingBoxPos'."""

    __slots__ = [
        '_probability_percent',
        '_bbox',
        '_position',
        '_class_id',
        '_time',
    ]

    _fields_and_field_types = {
        'probability_percent': 'int8',
        'bbox': 'msg05_base/Rect',
        'position': 'msg05_base/Vector3I16',
        'class_id': 'string',
        'time': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Rect'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Vector3I16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.probability_percent = kwargs.get('probability_percent', int())
        from msg05_base.msg import Rect
        self.bbox = kwargs.get('bbox', Rect())
        from msg05_base.msg import Vector3I16
        self.position = kwargs.get('position', Vector3I16())
        self.class_id = kwargs.get('class_id', str())
        self.time = kwargs.get('time', int())

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
        if self.probability_percent != other.probability_percent:
            return False
        if self.bbox != other.bbox:
            return False
        if self.position != other.position:
            return False
        if self.class_id != other.class_id:
            return False
        if self.time != other.time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def probability_percent(self):
        """Message field 'probability_percent'."""
        return self._probability_percent

    @probability_percent.setter
    def probability_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'probability_percent' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'probability_percent' field must be an integer in [-128, 127]"
        self._probability_percent = value

    @builtins.property
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if __debug__:
            from msg05_base.msg import Rect
            assert \
                isinstance(value, Rect), \
                "The 'bbox' field must be a sub message of type 'Rect'"
        self._bbox = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from msg05_base.msg import Vector3I16
            assert \
                isinstance(value, Vector3I16), \
                "The 'position' field must be a sub message of type 'Vector3I16'"
        self._position = value

    @builtins.property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_id' field must be of type 'str'"
        self._class_id = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time' field must be an unsigned integer in [0, 4294967295]"
        self._time = value
