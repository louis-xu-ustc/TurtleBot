# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gateway_msgs/AdvertiseAllRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import gateway_msgs.msg

class AdvertiseAllRequest(genpy.Message):
  _md5sum = "b9886afdbeb585f0929f1fe1334dd03e"
  _type = "gateway_msgs/AdvertiseAllRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
bool cancel
Rule[] blacklist


================================================================================
MSG: gateway_msgs/Rule
# Standard gateway connection rule

# type of connection (from gateway_msgs.msg.Connection)
string type

# this is the topic/service name or the action base name (a regex is supported)
string name 

# (optional) an optional node name can be provided. if node name is not provided
# then all nodes are matched (also supports regex)
string node
"""
  __slots__ = ['cancel','blacklist']
  _slot_types = ['bool','gateway_msgs/Rule[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cancel,blacklist

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AdvertiseAllRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cancel is None:
        self.cancel = False
      if self.blacklist is None:
        self.blacklist = []
    else:
      self.cancel = False
      self.blacklist = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_B.pack(self.cancel))
      length = len(self.blacklist)
      buff.write(_struct_I.pack(length))
      for val1 in self.blacklist:
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.node
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.blacklist is None:
        self.blacklist = None
      end = 0
      start = end
      end += 1
      (self.cancel,) = _struct_B.unpack(str[start:end])
      self.cancel = bool(self.cancel)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.blacklist = []
      for i in range(0, length):
        val1 = gateway_msgs.msg.Rule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.node = str[start:end].decode('utf-8')
        else:
          val1.node = str[start:end]
        self.blacklist.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_B.pack(self.cancel))
      length = len(self.blacklist)
      buff.write(_struct_I.pack(length))
      for val1 in self.blacklist:
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.node
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.blacklist is None:
        self.blacklist = None
      end = 0
      start = end
      end += 1
      (self.cancel,) = _struct_B.unpack(str[start:end])
      self.cancel = bool(self.cancel)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.blacklist = []
      for i in range(0, length):
        val1 = gateway_msgs.msg.Rule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.node = str[start:end].decode('utf-8')
        else:
          val1.node = str[start:end]
        self.blacklist.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gateway_msgs/AdvertiseAllResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import gateway_msgs.msg

class AdvertiseAllResponse(genpy.Message):
  _md5sum = "d9c8370d5d4ea835b3dd7ba52feee140"
  _type = "gateway_msgs/AdvertiseAllResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """


int8 result
string error_message

Rule[] blacklist


================================================================================
MSG: gateway_msgs/Rule
# Standard gateway connection rule

# type of connection (from gateway_msgs.msg.Connection)
string type

# this is the topic/service name or the action base name (a regex is supported)
string name 

# (optional) an optional node name can be provided. if node name is not provided
# then all nodes are matched (also supports regex)
string node
"""
  __slots__ = ['result','error_message','blacklist']
  _slot_types = ['int8','string','gateway_msgs/Rule[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result,error_message,blacklist

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AdvertiseAllResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = 0
      if self.error_message is None:
        self.error_message = ''
      if self.blacklist is None:
        self.blacklist = []
    else:
      self.result = 0
      self.error_message = ''
      self.blacklist = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_b.pack(self.result))
      _x = self.error_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.blacklist)
      buff.write(_struct_I.pack(length))
      for val1 in self.blacklist:
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.node
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.blacklist is None:
        self.blacklist = None
      end = 0
      start = end
      end += 1
      (self.result,) = _struct_b.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_message = str[start:end].decode('utf-8')
      else:
        self.error_message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.blacklist = []
      for i in range(0, length):
        val1 = gateway_msgs.msg.Rule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.node = str[start:end].decode('utf-8')
        else:
          val1.node = str[start:end]
        self.blacklist.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_b.pack(self.result))
      _x = self.error_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.blacklist)
      buff.write(_struct_I.pack(length))
      for val1 in self.blacklist:
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.node
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.blacklist is None:
        self.blacklist = None
      end = 0
      start = end
      end += 1
      (self.result,) = _struct_b.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_message = str[start:end].decode('utf-8')
      else:
        self.error_message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.blacklist = []
      for i in range(0, length):
        val1 = gateway_msgs.msg.Rule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.node = str[start:end].decode('utf-8')
        else:
          val1.node = str[start:end]
        self.blacklist.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_b = struct.Struct("<b")
class AdvertiseAll(object):
  _type          = 'gateway_msgs/AdvertiseAll'
  _md5sum = '51a5c6982ba636b1397142aab7eb86e6'
  _request_class  = AdvertiseAllRequest
  _response_class = AdvertiseAllResponse
