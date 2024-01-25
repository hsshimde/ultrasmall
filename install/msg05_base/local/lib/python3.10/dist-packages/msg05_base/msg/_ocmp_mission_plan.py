# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/OCMPMissionPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OCMPMissionPlan(type):
    """Metaclass of message 'OCMPMissionPlan'."""

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
                'msg05_base.msg.OCMPMissionPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ocmp_mission_plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ocmp_mission_plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ocmp_mission_plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ocmp_mission_plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ocmp_mission_plan

            from msg05_base.msg import Rect
            if Rect.__class__._TYPE_SUPPORT is None:
                Rect.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OCMPMissionPlan(metaclass=Metaclass_OCMPMissionPlan):
    """Message class 'OCMPMissionPlan'."""

    __slots__ = [
        '_mission_name',
        '_mission_area',
    ]

    _fields_and_field_types = {
        'mission_name': 'string',
        'mission_area': 'msg05_base/Rect',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'Rect'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_name = kwargs.get('mission_name', str())
        from msg05_base.msg import Rect
        self.mission_area = kwargs.get('mission_area', Rect())

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
        if self.mission_name != other.mission_name:
            return False
        if self.mission_area != other.mission_area:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_name(self):
        """Message field 'mission_name'."""
        return self._mission_name

    @mission_name.setter
    def mission_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_name' field must be of type 'str'"
        self._mission_name = value

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
