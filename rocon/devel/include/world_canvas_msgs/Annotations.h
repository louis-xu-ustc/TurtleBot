// Generated by gencpp from file world_canvas_msgs/Annotations.msg
// DO NOT EDIT!


#ifndef WORLD_CANVAS_MSGS_MESSAGE_ANNOTATIONS_H
#define WORLD_CANVAS_MSGS_MESSAGE_ANNOTATIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <world_canvas_msgs/Annotation.h>

namespace world_canvas_msgs
{
template <class ContainerAllocator>
struct Annotations_
{
  typedef Annotations_<ContainerAllocator> Type;

  Annotations_()
    : map_id()
    , annotations()  {
    }
  Annotations_(const ContainerAllocator& _alloc)
    : map_id(_alloc)
    , annotations(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_id_type;
  _map_id_type map_id;

   typedef std::vector< ::world_canvas_msgs::Annotation_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::world_canvas_msgs::Annotation_<ContainerAllocator> >::other >  _annotations_type;
  _annotations_type annotations;




  typedef boost::shared_ptr< ::world_canvas_msgs::Annotations_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::world_canvas_msgs::Annotations_<ContainerAllocator> const> ConstPtr;

}; // struct Annotations_

typedef ::world_canvas_msgs::Annotations_<std::allocator<void> > Annotations;

typedef boost::shared_ptr< ::world_canvas_msgs::Annotations > AnnotationsPtr;
typedef boost::shared_ptr< ::world_canvas_msgs::Annotations const> AnnotationsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::world_canvas_msgs::Annotations_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::world_canvas_msgs::Annotations_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace world_canvas_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'world_canvas_msgs': ['/home/turtlebot/ese_team_project/rocon/src/world_canvas_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::world_canvas_msgs::Annotations_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::world_canvas_msgs::Annotations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::world_canvas_msgs::Annotations_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b47cb1c51cbc7a899bf81b52bdb8c27";
  }

  static const char* value(const ::world_canvas_msgs::Annotations_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b47cb1c51cbc7a8ULL;
  static const uint64_t static_value2 = 0x99bf81b52bdb8c27ULL;
};

template<class ContainerAllocator>
struct DataType< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "world_canvas_msgs/Annotations";
  }

  static const char* value(const ::world_canvas_msgs::Annotations_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Semantic map:\n\
#  - geometric map id\n\
#  - a list of annotations\n\
\n\
string map_id\n\
Annotation[] annotations\n\
\n\
================================================================================\n\
MSG: world_canvas_msgs/Annotation\n\
# Annotation: a generic descriptor for an element (object) in a semantic map\n\
# An annotation can be used to introspect, visualize or key into database filters/searches without\n\
# having to touch the described object directly\n\
#  - timestamp : Creation/last update time\n\
#  - world     : World the object belongs to\n\
#  - id        : Annotation unique id\n\
#  - data_id   : Referenced object unique id (an object can be reference by 1 or more annotations)\n\
#  - name      : Referenced object name\n\
#  - type      : Referenced object type (a message type, as world canvas objects are ROS messages)\n\
#  - shape     : One of 1 (CUBE), 2 (SPHERE), 3 (CYLINDER), 9 (TEXT)\n\
#  - color     : R, G, B, A (optional)\n\
#  - size      : X, Y, Z (optional)\n\
#  - keywords  : Generic properties of this object: allows basic filtering without introspecting\n\
#                the object itself\n\
#  - relationships : List of associated annotations, used for retrieving operational sets of objects\n\
\n\
# General properties\n\
time timestamp\n\
uuid_msgs/UniqueID id\n\
uuid_msgs/UniqueID data_id\n\
string world\n\
string name\n\
string type\n\
\n\
# Physical properties\n\
int32  shape\n\
std_msgs/ColorRGBA color\n\
geometry_msgs/Vector3 size\n\
geometry_msgs/PoseWithCovarianceStamped pose\n\
\n\
# Querying properties\n\
string[] keywords\n\
uuid_msgs/UniqueID[] relationships\n\
\n\
================================================================================\n\
MSG: uuid_msgs/UniqueID\n\
# A universally unique identifier (UUID).\n\
#\n\
#  http://en.wikipedia.org/wiki/Universally_unique_identifier\n\
#  http://tools.ietf.org/html/rfc4122.html\n\
\n\
uint8[16] uuid\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovarianceStamped\n\
# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::world_canvas_msgs::Annotations_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_id);
      stream.next(m.annotations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Annotations_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::world_canvas_msgs::Annotations_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::world_canvas_msgs::Annotations_<ContainerAllocator>& v)
  {
    s << indent << "map_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_id);
    s << indent << "annotations[]" << std::endl;
    for (size_t i = 0; i < v.annotations.size(); ++i)
    {
      s << indent << "  annotations[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::world_canvas_msgs::Annotation_<ContainerAllocator> >::stream(s, indent + "    ", v.annotations[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WORLD_CANVAS_MSGS_MESSAGE_ANNOTATIONS_H
