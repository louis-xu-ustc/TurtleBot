// Generated by gencpp from file world_canvas_msgs/SaveMapRequest.msg
// DO NOT EDIT!


#ifndef WORLD_CANVAS_MSGS_MESSAGE_SAVEMAPREQUEST_H
#define WORLD_CANVAS_MSGS_MESSAGE_SAVEMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace world_canvas_msgs
{
template <class ContainerAllocator>
struct SaveMapRequest_
{
  typedef SaveMapRequest_<ContainerAllocator> Type;

  SaveMapRequest_()
    : map_name()  {
    }
  SaveMapRequest_(const ContainerAllocator& _alloc)
    : map_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_name_type;
  _map_name_type map_name;




  typedef boost::shared_ptr< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SaveMapRequest_

typedef ::world_canvas_msgs::SaveMapRequest_<std::allocator<void> > SaveMapRequest;

typedef boost::shared_ptr< ::world_canvas_msgs::SaveMapRequest > SaveMapRequestPtr;
typedef boost::shared_ptr< ::world_canvas_msgs::SaveMapRequest const> SaveMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25e928a2d4ff388c294895b7af935978";
  }

  static const char* value(const ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25e928a2d4ff388cULL;
  static const uint64_t static_value2 = 0x294895b7af935978ULL;
};

template<class ContainerAllocator>
struct DataType< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "world_canvas_msgs/SaveMapRequest";
  }

  static const char* value(const ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
string map_name\n\
";
  }

  static const char* value(const ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::world_canvas_msgs::SaveMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "map_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WORLD_CANVAS_MSGS_MESSAGE_SAVEMAPREQUEST_H
