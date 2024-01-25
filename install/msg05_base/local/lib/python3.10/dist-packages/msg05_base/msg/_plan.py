# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/Plan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Plan(type):
    """Metaclass of message 'Plan'."""

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
                'msg05_base.msg.Plan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan

            from msg05_base.msg import Group
            if Group.__class__._TYPE_SUPPORT is None:
                Group.__class__.__import_type_support__()

            from msg05_base.msg import PointI16
            if PointI16.__class__._TYPE_SUPPORT is None:
                PointI16.__class__.__import_type_support__()

            from msg05_base.msg import Rect
            if Rect.__class__._TYPE_SUPPORT is None:
                Rect.__class__.__import_type_support__()

            from msg05_base.msg import Target
            if Target.__class__._TYPE_SUPPORT is None:
                Target.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Plan(metaclass=Metaclass_Plan):
    """Message class 'Plan'."""

    __slots__ = [
        '_groups',
        '_mission',
        '_task',
        '_mission_area',
        '_mission_sub_area',
        '_targets',
        '_formation',
    ]

    _fields_and_field_types = {
        'groups': 'sequence<msg05_base/Group>',
        'mission': 'uint8',
        'task': 'uint8',
        'mission_area': 'msg05_base/Rect',
        'mission_sub_area': 'msg05_base/Rect',
        'targets': 'sequence<msg05_base/Target>',
        'formation': 'sequence<msg05_base/PointI16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Group')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Rect'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Rect'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Target')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PointI16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.groups = kwargs.get('groups', [])
        self.mission = kwargs.get('mission', int())
        self.task = kwargs.get('task', int())
        from msg05_base.msg import Rect
        self.mission_area = kwargs.get('mission_area', Rect())
        from msg05_base.msg import Rect
        self.mission_sub_area = kwargs.get('mission_sub_area', Rect())
        self.targets = kwargs.get('targets', [])
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
        if self.groups != other.groups:
            return False
        if self.mission != other.mission:
            return False
        if self.task != other.task:
            return False
        if self.mission_area != other.mission_area:
            return False
        if self.mission_sub_area != other.mission_sub_area:
            return False
        if self.targets != other.targets:
            return False
        if self.formation != other.formation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def groups(self):
        """Message field 'groups'."""
        return self._groups

    @groups.setter
    def groups(self, value):
        if __debug__:
            from msg05_base.msg import Group
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
                 all(isinstance(v, Group) for v in value) and
                 True), \
                "The 'groups' field must be a set or sequence and each value of type 'Group'"
        self._groups = value

    @builtins.property
    def mission(self):
        """Message field 'mission'."""
        return self._mission

    @mission.setter
    def mission(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission' field must be an unsigned integer in [0, 255]"
        self._mission = value

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
    def mission_area(self):
        """Message field 'mission_area'."""
        return self._mission_area

    @mission_area.setter
    def mission_area(self, value):
        if __debug__:
            from msg05_base.msg import Rect
            assert \
                isinstance(value, Rect), \
                "The 'mission_area' field must be a sub message of type 'Rect'"
        self._mission_area = value

    @builtins.property
    def mission_sub_area(self):
        """Message field 'mission_sub_area'."""
        return self._mission_sub_area

    @mission_sub_area.setter
    def mission_sub_area(self, value):
        if __debug__:
            from msg05_base.msg import Rect
            assert \
                isinstance(value, Rect), \
                "The 'mission_sub_area' field must be a sub message of type 'Rect'"
        self._mission_sub_area = value

    @builtins.property
    def targets(self):
        """Message field 'targets'."""
        return self._targets

    @targets.setter
    def targets(self, value):
        if __debug__:
            from msg05_base.msg import Target
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
                 all(isinstance(v, Target) for v in value) and
                 True), \
                "The 'targets' field must be a set or sequence and each value of type 'Target'"
        self._targets = value

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
