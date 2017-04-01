# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from world_canvas_msgs/Annotation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import uuid_msgs.msg
import geometry_msgs.msg
import genpy
import std_msgs.msg

class Annotation(genpy.Message):
  _md5sum = "ad3b363d73f197c0fc0f70645a6b2598"
  _type = "world_canvas_msgs/Annotation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Annotation: a generic descriptor for an element (object) in a semantic map
# An annotation can be used to introspect, visualize or key into database filters/searches without
# having to touch the described object directly
#  - timestamp : Creation/last update time
#  - world     : World the object belongs to
#  - id        : Annotation unique id
#  - data_id   : Referenced object unique id (an object can be reference by 1 or more annotations)
#  - name      : Referenced object name
#  - type      : Referenced object type (a message type, as world canvas objects are ROS messages)
#  - shape     : One of 1 (CUBE), 2 (SPHERE), 3 (CYLINDER), 9 (TEXT)
#  - color     : R, G, B, A (optional)
#  - size      : X, Y, Z (optional)
#  - keywords  : Generic properties of this object: allows basic filtering without introspecting
#                the object itself
#  - relationships : List of associated annotations, used for retrieving operational sets of objects

# General properties
time timestamp
uuid_msgs/UniqueID id
uuid_msgs/UniqueID data_id
string world
string name
string type

# Physical properties
int32  shape
std_msgs/ColorRGBA color
geometry_msgs/Vector3 size
geometry_msgs/PoseWithCovarianceStamped pose

# Querying properties
string[] keywords
uuid_msgs/UniqueID[] relationships

================================================================================
MSG: uuid_msgs/UniqueID
# A universally unique identifier (UUID).
#
#  http://en.wikipedia.org/wiki/Universally_unique_identifier
#  http://tools.ietf.org/html/rfc4122.html

uint8[16] uuid

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/PoseWithCovarianceStamped
# This expresses an estimated pose with a reference coordinate frame and timestamp

Header header
PoseWithCovariance pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['timestamp','id','data_id','world','name','type','shape','color','size','pose','keywords','relationships']
  _slot_types = ['time','uuid_msgs/UniqueID','uuid_msgs/UniqueID','string','string','string','int32','std_msgs/ColorRGBA','geometry_msgs/Vector3','geometry_msgs/PoseWithCovarianceStamped','string[]','uuid_msgs/UniqueID[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       timestamp,id,data_id,world,name,type,shape,color,size,pose,keywords,relationships

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Annotation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      if self.id is None:
        self.id = uuid_msgs.msg.UniqueID()
      if self.data_id is None:
        self.data_id = uuid_msgs.msg.UniqueID()
      if self.world is None:
        self.world = ''
      if self.name is None:
        self.name = ''
      if self.type is None:
        self.type = ''
      if self.shape is None:
        self.shape = 0
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.size is None:
        self.size = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      if self.keywords is None:
        self.keywords = []
      if self.relationships is None:
        self.relationships = []
    else:
      self.timestamp = genpy.Time()
      self.id = uuid_msgs.msg.UniqueID()
      self.data_id = uuid_msgs.msg.UniqueID()
      self.world = ''
      self.name = ''
      self.type = ''
      self.shape = 0
      self.color = std_msgs.msg.ColorRGBA()
      self.size = geometry_msgs.msg.Vector3()
      self.pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      self.keywords = []
      self.relationships = []

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
      _x = self
      buff.write(_struct_2I.pack(_x.timestamp.secs, _x.timestamp.nsecs))
      _x = self.id.uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_16B.pack(*_x))
      else:
        buff.write(_struct_16s.pack(_x))
      _x = self.data_id.uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_16B.pack(*_x))
      else:
        buff.write(_struct_16s.pack(_x))
      _x = self.world
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_i4f3d3I.pack(_x.shape, _x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.size.x, _x.size.y, _x.size.z, _x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs))
      _x = self.pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.pose.pose.pose.position.x, _x.pose.pose.pose.position.y, _x.pose.pose.pose.position.z, _x.pose.pose.pose.orientation.x, _x.pose.pose.pose.orientation.y, _x.pose.pose.pose.orientation.z, _x.pose.pose.pose.orientation.w))
      buff.write(_struct_36d.pack(*self.pose.pose.covariance))
      length = len(self.keywords)
      buff.write(_struct_I.pack(length))
      for val1 in self.keywords:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.relationships)
      buff.write(_struct_I.pack(length))
      for val1 in self.relationships:
        _x = val1.uuid
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_struct_16B.pack(*_x))
        else:
          buff.write(_struct_16s.pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      if self.id is None:
        self.id = uuid_msgs.msg.UniqueID()
      if self.data_id is None:
        self.data_id = uuid_msgs.msg.UniqueID()
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.size is None:
        self.size = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      if self.relationships is None:
        self.relationships = None
      end = 0
      _x = self
      start = end
      end += 8
      (_x.timestamp.secs, _x.timestamp.nsecs,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 16
      self.id.uuid = str[start:end]
      start = end
      end += 16
      self.data_id.uuid = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.world = str[start:end].decode('utf-8')
      else:
        self.world = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8')
      else:
        self.type = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.shape, _x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.size.x, _x.size.y, _x.size.z, _x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs,) = _struct_i4f3d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.pose.pose.pose.position.x, _x.pose.pose.pose.position.y, _x.pose.pose.pose.position.z, _x.pose.pose.pose.orientation.x, _x.pose.pose.pose.orientation.y, _x.pose.pose.pose.orientation.z, _x.pose.pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 288
      self.pose.pose.covariance = _struct_36d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.keywords = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.keywords.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.relationships = []
      for i in range(0, length):
        val1 = uuid_msgs.msg.UniqueID()
        start = end
        end += 16
        val1.uuid = str[start:end]
        self.relationships.append(val1)
      self.timestamp.canon()
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
      _x = self
      buff.write(_struct_2I.pack(_x.timestamp.secs, _x.timestamp.nsecs))
      _x = self.id.uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_16B.pack(*_x))
      else:
        buff.write(_struct_16s.pack(_x))
      _x = self.data_id.uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_16B.pack(*_x))
      else:
        buff.write(_struct_16s.pack(_x))
      _x = self.world
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_i4f3d3I.pack(_x.shape, _x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.size.x, _x.size.y, _x.size.z, _x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs))
      _x = self.pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.pose.pose.pose.position.x, _x.pose.pose.pose.position.y, _x.pose.pose.pose.position.z, _x.pose.pose.pose.orientation.x, _x.pose.pose.pose.orientation.y, _x.pose.pose.pose.orientation.z, _x.pose.pose.pose.orientation.w))
      buff.write(self.pose.pose.covariance.tostring())
      length = len(self.keywords)
      buff.write(_struct_I.pack(length))
      for val1 in self.keywords:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.relationships)
      buff.write(_struct_I.pack(length))
      for val1 in self.relationships:
        _x = val1.uuid
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(_struct_16B.pack(*_x))
        else:
          buff.write(_struct_16s.pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      if self.id is None:
        self.id = uuid_msgs.msg.UniqueID()
      if self.data_id is None:
        self.data_id = uuid_msgs.msg.UniqueID()
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.size is None:
        self.size = geometry_msgs.msg.Vector3()
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      if self.relationships is None:
        self.relationships = None
      end = 0
      _x = self
      start = end
      end += 8
      (_x.timestamp.secs, _x.timestamp.nsecs,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 16
      self.id.uuid = str[start:end]
      start = end
      end += 16
      self.data_id.uuid = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.world = str[start:end].decode('utf-8')
      else:
        self.world = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8')
      else:
        self.type = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.shape, _x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.size.x, _x.size.y, _x.size.z, _x.pose.header.seq, _x.pose.header.stamp.secs, _x.pose.header.stamp.nsecs,) = _struct_i4f3d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.pose.pose.pose.position.x, _x.pose.pose.pose.position.y, _x.pose.pose.pose.position.z, _x.pose.pose.pose.orientation.x, _x.pose.pose.pose.orientation.y, _x.pose.pose.pose.orientation.z, _x.pose.pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 288
      self.pose.pose.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.keywords = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.keywords.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.relationships = []
      for i in range(0, length):
        val1 = uuid_msgs.msg.UniqueID()
        start = end
        end += 16
        val1.uuid = str[start:end]
        self.relationships.append(val1)
      self.timestamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i4f3d3I = struct.Struct("<i4f3d3I")
_struct_7d = struct.Struct("<7d")
_struct_36d = struct.Struct("<36d")
_struct_16B = struct.Struct("<16B")
_struct_2I = struct.Struct("<2I")
_struct_16s = struct.Struct("<16s")
