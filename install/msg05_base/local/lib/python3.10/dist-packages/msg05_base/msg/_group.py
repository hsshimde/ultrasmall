# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/Group.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Group(type):
    """Metaclass of message 'Group'."""

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
                'msg05_base.msg.Group')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__group
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__group
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__group
            cls._TYPE_SUPPORT = module.type_support_msg__msg__group
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__group

            from msg05_base.msg import PlatformRegistration
            if PlatformRegistration.__class__._TYPE_SUPPORT is None:
                PlatformRegistration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Group(metaclass=Metaclass_Group):
    """Message class 'Group'."""

    __slots__ = [
        '_group_id',
        '_leader_id',
        '_registrations',
    ]

    _fields_and_field_types = {
        'group_id': 'uint8',
        'leader_id': 'uint8',
        'registrations': 'sequence<msg05_base/PlatformRegistration>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PlatformRegistration')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group_id = kwargs.get('group_id', int())
        self.leader_id = kwargs.get('leader_id', int())
        self.registrations = kwargs.get('registrations', [])

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
        if self.leader_id != other.leader_id:
            return False
        if self.registrations != other.registrations:
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
    def leader_id(self):
        """Message field 'leader_id'."""
        return self._leader_id

    @leader_id.setter
    def leader_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leader_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'leader_id' field must be an unsigned integer in [0, 255]"
        self._leader_id = value

    @builtins.property
    def registrations(self):
        """Message field 'registrations'."""
        return self._registrations

    @registrations.setter
    def registrations(self, value):
        if __debug__:
            from msg05_base.msg import PlatformRegistration
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
                 all(isinstance(v, PlatformRegistration) for v in value) and
                 True), \
                "The 'registrations' field must be a set or sequence and each value of type 'PlatformRegistration'"
        self._registrations = value
