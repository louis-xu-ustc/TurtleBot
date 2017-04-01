// Generated by gencpp from file turtlebot_calibration/ScanAngle.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_CALIBRATION_MESSAGE_SCANANGLE_H
#define TURTLEBOT_CALIBRATION_MESSAGE_SCANANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace turtlebot_calibration
{
template <class ContainerAllocator>
struct ScanAngle_
{
  typedef ScanAngle_<ContainerAllocator> Type;

  ScanAngle_()
    : header()
    , scan_angle(0.0)  {
    }
  ScanAngle_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , scan_angle(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _scan_angle_type;
  _scan_angle_type scan_angle;




  typedef boost::shared_ptr< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> const> ConstPtr;

}; // struct ScanAngle_

typedef ::turtlebot_calibration::ScanAngle_<std::allocator<void> > ScanAngle;

typedef boost::shared_ptr< ::turtlebot_calibration::ScanAngle > ScanAnglePtr;
typedef boost::shared_ptr< ::turtlebot_calibration::ScanAngle const> ScanAngleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_calibration::ScanAngle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_calibration

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'turtlebot_calibration': ['/home/turtlebot/ese_team_project/turtlebot/src/turtlebot_apps/turtlebot_calibration/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "06e2c839dc5c7f5c13ac09a8b4ff0a6a";
  }

  static const char* value(const ::turtlebot_calibration::ScanAngle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x06e2c839dc5c7f5cULL;
  static const uint64_t static_value2 = 0x13ac09a8b4ff0a6aULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_calibration/ScanAngle";
  }

  static const char* value(const ::turtlebot_calibration::ScanAngle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 scan_angle\n\
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
";
  }

  static const char* value(const ::turtlebot_calibration::ScanAngle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.scan_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScanAngle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_calibration::ScanAngle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_calibration::ScanAngle_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "scan_angle: ";
    Printer<double>::stream(s, indent + "  ", v.scan_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_CALIBRATION_MESSAGE_SCANANGLE_H
