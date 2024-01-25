# generated from rosidl_generator_py/resource/_idl.py.em
# with input from use_case_one:srv/Grouping.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Grouping_Request(type):
    """Metaclass of message 'Grouping_Request'."""

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
            module = import_type_support('use_case_one')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'use_case_one.srv.Grouping_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grouping__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grouping__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grouping__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grouping__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grouping__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Grouping_Request(metaclass=Metaclass_Grouping_Request):
    """Message class 'Grouping_Request'."""

    __slots__ = [
        '_platform_id',
        '_is_leader',
        '_request_type',
        '_group_idx',
    ]

    _fields_and_field_types = {
        'platform_id': 'int32',
        'is_leader': 'boolean',
        'request_type': 'octet',
        'group_idx': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.platform_id = kwargs.get('platform_id', int())
        self.is_leader = kwargs.get('is_leader', bool())
        self.request_type = kwargs.get('request_type', bytes([0]))
        self.group_idx = kwargs.get('group_idx', int())

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
        if self.is_leader != other.is_leader:
            return False
        if self.request_type != other.request_type:
            return False
        if self.group_idx != other.group_idx:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'platform_id' field must be an integer in [-2147483648, 2147483647]"
        self._platform_id = value

    @builtins.property
    def is_leader(self):
        """Message field 'is_leader'."""
        return self._is_leader

    @is_leader.setter
    def is_leader(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_leader' field must be of type 'bool'"
        self._is_leader = value

    @builtins.property
    def request_type(self):
        """Message field 'request_type'."""
        return self._request_type

    @request_type.setter
    def request_type(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'request_type' field must be of type 'bytes' or 'ByteString' with length 1"
        self._request_type = value

    @builtins.property
    def group_idx(self):
        """Message field 'group_idx'."""
        return self._group_idx

    @group_idx.setter
    def group_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'group_idx' field must be an integer in [-2147483648, 2147483647]"
        self._group_idx = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Grouping_Response(type):
    """Metaclass of message 'Grouping_Response'."""

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
            module = import_type_support('use_case_one')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'use_case_one.srv.Grouping_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grouping__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grouping__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grouping__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grouping__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grouping__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Grouping_Response(metaclass=Metaclass_Grouping_Response):
    """Message class 'Grouping_Response'."""

    __slots__ = [
        '_platform_id',
        '_is_leader',
        '_reply_type',
        '_group_idx',
    ]

    _fields_and_field_types = {
        'platform_id': 'int32',
        'is_leader': 'boolean',
        'reply_type': 'octet',
        'group_idx': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.platform_id = kwargs.get('platform_id', int())
        self.is_leader = kwargs.get('is_leader', bool())
        self.reply_type = kwargs.get('reply_type', bytes([0]))
        self.group_idx = kwargs.get('group_idx', int())

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
        if self.is_leader != other.is_leader:
            return False
        if self.reply_type != other.reply_type:
            return False
        if self.group_idx != other.group_idx:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'platform_id' field must be an integer in [-2147483648, 2147483647]"
        self._platform_id = value

    @builtins.property
    def is_leader(self):
        """Message field 'is_leader'."""
        return self._is_leader

    @is_leader.setter
    def is_leader(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_leader' field must be of type 'bool'"
        self._is_leader = value

    @builtins.property
    def reply_type(self):
        """Message field 'reply_type'."""
        return self._reply_type

    @reply_type.setter
    def reply_type(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'reply_type' field must be of type 'bytes' or 'ByteString' with length 1"
        self._reply_type = value

    @builtins.property
    def group_idx(self):
        """Message field 'group_idx'."""
        return self._group_idx

    @group_idx.setter
    def group_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'group_idx' field must be an integer in [-2147483648, 2147483647]"
        self._group_idx = value


class Metaclass_Grouping(type):
    """Metaclass of service 'Grouping'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('use_case_one')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'use_case_one.srv.Grouping')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__grouping

            from use_case_one.srv import _grouping
            if _grouping.Metaclass_Grouping_Request._TYPE_SUPPORT is None:
                _grouping.Metaclass_Grouping_Request.__import_type_support__()
            if _grouping.Metaclass_Grouping_Response._TYPE_SUPPORT is None:
                _grouping.Metaclass_Grouping_Response.__import_type_support__()


class Grouping(metaclass=Metaclass_Grouping):
    from use_case_one.srv._grouping import Grouping_Request as Request
    from use_case_one.srv._grouping import Grouping_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
