# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/DrivingTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DrivingTarget(type):
    """Metaclass of message 'DrivingTarget'."""

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
                'msg05_base.msg.DrivingTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driving_target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driving_target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driving_target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driving_target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driving_target

            from msg05_base.msg import DrivingPose
            if DrivingPose.__class__._TYPE_SUPPORT is None:
                DrivingPose.__class__.__import_type_support__()

            from msg05_base.msg import PointI16
            if PointI16.__class__._TYPE_SUPPORT is None:
                PointI16.__class__.__import_type_support__()

            from msg05_base.msg import Vector3F32
            if Vector3F32.__class__._TYPE_SUPPORT is None:
                Vector3F32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DrivingTarget(metaclass=Metaclass_DrivingTarget):
    """Message class 'DrivingTarget'."""

    __slots__ = [
        '_pose',
        '_linear',
        '_angular',
        '_formation',
    ]

    _fields_and_field_types = {
        'pose': 'msg05_base/DrivingPose',
        'linear': 'msg05_base/Vector3F32',
        'angular': 'msg05_base/Vector3F32',
        'formation': 'sequence<msg05_base/PointI16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'DrivingPose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Vector3F32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Vector3F32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PointI16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from msg05_base.msg import DrivingPose
        self.pose = kwargs.get('pose', DrivingPose())
        from msg05_base.msg import Vector3F32
        self.linear = kwargs.get('linear', Vector3F32())
        from msg05_base.msg import Vector3F32
        self.angular = kwargs.get('angular', Vector3F32())
        self.formation = kwargs.get('formation', [])

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
        if self.pose != other.pose:
            return False
        if self.linear != other.linear:
            return False
        if self.angular != other.angular:
            return False
        if self.formation != other.formation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from msg05_base.msg import DrivingPose
            assert \
                isinstance(value, DrivingPose), \
                "The 'pose' field must be a sub message of type 'DrivingPose'"
        self._pose = value

    @builtins.property
    def linear(self):
        """Message field 'linear'."""
        return self._linear

    @linear.setter
    def linear(self, value):
        if __debug__:
            from msg05_base.msg import Vector3F32
            assert \
                isinstance(value, Vector3F32), \
                "The 'linear' field must be a sub message of type 'Vector3F32'"
        self._linear = value

    @builtins.property
    def angular(self):
        """Message field 'angular'."""
        return self._angular

    @angular.setter
    def angular(self, value):
        if __debug__:
            from msg05_base.msg import Vector3F32
            assert \
                isinstance(value, Vector3F32), \
                "The 'angular' field must be a sub message of type 'Vector3F32'"
        self._angular = value

    @builtins.property
    def formation(self):
        """Message field 'formation'."""
        return self._formation

    @formation.setter
    def formation(self, value):
        if __debug__:
            from msg05_base.msg import PointI16
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointI16) for v in value) and
                 True), \
                "The 'formation' field must be a set or sequence and each value of type 'PointI16'"
        self._formation = value
