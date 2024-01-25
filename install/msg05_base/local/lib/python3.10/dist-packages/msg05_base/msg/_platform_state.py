# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:msg/PlatformState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlatformState(type):
    """Metaclass of message 'PlatformState'."""

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
                'msg05_base.msg.PlatformState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__platform_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__platform_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__platform_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__platform_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__platform_state

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlatformState(metaclass=Metaclass_PlatformState):
    """Message class 'PlatformState'."""

    __slots__ = [
        '_platform_id',
        '_group_id',
        '_actuator_state',
        '_low_power_mode',
        '_battery_percentage',
        '_timestamp',
        '_network_connection',
    ]

    _fields_and_field_types = {
        'platform_id': 'uint8',
        'group_id': 'uint8',
        'actuator_state': 'std_msgs/Bool',
        'low_power_mode': 'std_msgs/Bool',
        'battery_percentage': 'uint8',
        'timestamp': 'uint32',
        'network_connection': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.platform_id = kwargs.get('platform_id', int())
        self.group_id = kwargs.get('group_id', int())
        from std_msgs.msg import Bool
        self.actuator_state = kwargs.get('actuator_state', Bool())
        from std_msgs.msg import Bool
        self.low_power_mode = kwargs.get('low_power_mode', Bool())
        self.battery_percentage = kwargs.get('battery_percentage', int())
        self.timestamp = kwargs.get('timestamp', int())
        from std_msgs.msg import Bool
        self.network_connection = kwargs.get('network_connection', Bool())

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
        if self.platform_id != other.platform_id:
            return False
        if self.group_id != other.group_id:
            return False
        if self.actuator_state != other.actuator_state:
            return False
        if self.low_power_mode != other.low_power_mode:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.network_connection != other.network_connection:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def platform_id(self):
        """Message field 'platform_id'."""
        return self._platform_id

    @platform_id.setter
    def platform_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'platform_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'platform_id' field must be an unsigned integer in [0, 255]"
        self._platform_id = value

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
    def actuator_state(self):
        """Message field 'actuator_state'."""
        return self._actuator_state

    @actuator_state.setter
    def actuator_state(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'actuator_state' field must be a sub message of type 'Bool'"
        self._actuator_state = value

    @builtins.property
    def low_power_mode(self):
        """Message field 'low_power_mode'."""
        return self._low_power_mode

    @low_power_mode.setter
    def low_power_mode(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'low_power_mode' field must be a sub message of type 'Bool'"
        self._low_power_mode = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_percentage' field must be an unsigned integer in [0, 255]"
        self._battery_percentage = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp = value

    @builtins.property
    def network_connection(self):
        """Message field 'network_connection'."""
        return self._network_connection

    @network_connection.setter
    def network_connection(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'network_connection' field must be a sub message of type 'Bool'"
        self._network_connection = value
