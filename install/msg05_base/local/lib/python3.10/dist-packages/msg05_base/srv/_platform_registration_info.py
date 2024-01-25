# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg05_base:srv/PlatformRegistrationInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlatformRegistrationInfo_Request(type):
    """Metaclass of message 'PlatformRegistrationInfo_Request'."""

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
                'msg05_base.srv.PlatformRegistrationInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__platform_registration_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__platform_registration_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__platform_registration_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__platform_registration_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__platform_registration_info__request

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


class PlatformRegistrationInfo_Request(metaclass=Metaclass_PlatformRegistrationInfo_Request):
    """Message class 'PlatformRegistrationInfo_Request'."""

    __slots__ = [
        '_registration',
    ]

    _fields_and_field_types = {
        'registration': 'msg05_base/PlatformRegistration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['msg05_base', 'msg'], 'PlatformRegistration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from msg05_base.msg import PlatformRegistration
        self.registration = kwargs.get('registration', PlatformRegistration())

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
        if self.registration != other.registration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def registration(self):
        """Message field 'registration'."""
        return self._registration

    @registration.setter
    def registration(self, value):
        if __debug__:
            from msg05_base.msg import PlatformRegistration
            assert \
                isinstance(value, PlatformRegistration), \
                "The 'registration' field must be a sub message of type 'PlatformRegistration'"
        self._registration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlatformRegistrationInfo_Response(type):
    """Metaclass of message 'PlatformRegistrationInfo_Response'."""

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
                'msg05_base.srv.PlatformRegistrationInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__platform_registration_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__platform_registration_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__platform_registration_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__platform_registration_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__platform_registration_info__response

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


class PlatformRegistrationInfo_Response(metaclass=Metaclass_PlatformRegistrationInfo_Response):
    """Message class 'PlatformRegistrationInfo_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Bool
        self.result = kwargs.get('result', Bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'result' field must be a sub message of type 'Bool'"
        self._result = value


class Metaclass_PlatformRegistrationInfo(type):
    """Metaclass of service 'PlatformRegistrationInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg05_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg05_base.srv.PlatformRegistrationInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__platform_registration_info

            from msg05_base.srv import _platform_registration_info
            if _platform_registration_info.Metaclass_PlatformRegistrationInfo_Request._TYPE_SUPPORT is None:
                _platform_registration_info.Metaclass_PlatformRegistrationInfo_Request.__import_type_support__()
            if _platform_registration_info.Metaclass_PlatformRegistrationInfo_Response._TYPE_SUPPORT is None:
                _platform_registration_info.Metaclass_PlatformRegistrationInfo_Response.__import_type_support__()


class PlatformRegistrationInfo(metaclass=Metaclass_PlatformRegistrationInfo):
    from msg05_base.srv._platform_registration_info import PlatformRegistrationInfo_Request as Request
    from msg05_base.srv._platform_registration_info import PlatformRegistrationInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
