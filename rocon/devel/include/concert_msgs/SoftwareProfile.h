// Generated by gencpp from file concert_msgs/SoftwareProfile.msg
// DO NOT EDIT!


#ifndef CONCERT_MSGS_MESSAGE_SOFTWAREPROFILE_H
#define CONCERT_MSGS_MESSAGE_SOFTWAREPROFILE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_std_msgs/KeyValue.h>

namespace concert_msgs
{
template <class ContainerAllocator>
struct SoftwareProfile_
{
  typedef SoftwareProfile_<ContainerAllocator> Type;

  SoftwareProfile_()
    : resource_name()
    , name()
    , description()
    , author()
    , launch()
    , max_count(0)
    , parameters()  {
    }
  SoftwareProfile_(const ContainerAllocator& _alloc)
    : resource_name(_alloc)
    , name(_alloc)
    , description(_alloc)
    , author(_alloc)
    , launch(_alloc)
    , max_count(0)
    , parameters(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _resource_name_type;
  _resource_name_type resource_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _author_type;
  _author_type author;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _launch_type;
  _launch_type launch;

   typedef int16_t _max_count_type;
  _max_count_type max_count;

   typedef std::vector< ::rocon_std_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::other >  _parameters_type;
  _parameters_type parameters;




  typedef boost::shared_ptr< ::concert_msgs::SoftwareProfile_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::concert_msgs::SoftwareProfile_<ContainerAllocator> const> ConstPtr;

}; // struct SoftwareProfile_

typedef ::concert_msgs::SoftwareProfile_<std::allocator<void> > SoftwareProfile;

typedef boost::shared_ptr< ::concert_msgs::SoftwareProfile > SoftwareProfilePtr;
typedef boost::shared_ptr< ::concert_msgs::SoftwareProfile const> SoftwareProfileConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::concert_msgs::SoftwareProfile_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace concert_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_service_pair_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_service_pair_msgs/msg'], 'gateway_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/gateway_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rocon_app_manager_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_app_manager_msgs/msg'], 'concert_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/concert_msgs/msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg'], 'rocon_std_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_std_msgs/msg', '/home/turtlebot/ese_team_project/rocon/devel/share/rocon_std_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::concert_msgs::SoftwareProfile_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::concert_msgs::SoftwareProfile_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::concert_msgs::SoftwareProfile_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae0fcd28b11be06d5ad15aafa639856a";
  }

  static const char* value(const ::concert_msgs::SoftwareProfile_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae0fcd28b11be06dULL;
  static const uint64_t static_value2 = 0x5ad15aafa639856aULL;
};

template<class ContainerAllocator>
struct DataType< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "concert_msgs/SoftwareProfile";
  }

  static const char* value(const ::concert_msgs::SoftwareProfile_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Configurations\n\
string resource_name\n\
string name\n\
string description\n\
string author\n\
string launch\n\
int16  max_count\n\
rocon_std_msgs/KeyValue[] parameters\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/KeyValue\n\
string key\n\
string value\n\
";
  }

  static const char* value(const ::concert_msgs::SoftwareProfile_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.resource_name);
      stream.next(m.name);
      stream.next(m.description);
      stream.next(m.author);
      stream.next(m.launch);
      stream.next(m.max_count);
      stream.next(m.parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoftwareProfile_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::concert_msgs::SoftwareProfile_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::concert_msgs::SoftwareProfile_<ContainerAllocator>& v)
  {
    s << indent << "resource_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.resource_name);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "author: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.author);
    s << indent << "launch: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.launch);
    s << indent << "max_count: ";
    Printer<int16_t>::stream(s, indent + "  ", v.max_count);
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONCERT_MSGS_MESSAGE_SOFTWAREPROFILE_H