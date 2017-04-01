// Generated by gencpp from file rocon_app_manager_msgs/Status.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_STATUS_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_app_manager_msgs/Rapp.h>
#include <rocon_app_manager_msgs/PublishedInterface.h>
#include <rocon_std_msgs/KeyValue.h>

namespace rocon_app_manager_msgs
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : application_namespace()
    , remote_controller()
    , rapp_status()
    , rapp()
    , published_interfaces()
    , published_parameters()  {
    }
  Status_(const ContainerAllocator& _alloc)
    : application_namespace(_alloc)
    , remote_controller(_alloc)
    , rapp_status(_alloc)
    , rapp(_alloc)
    , published_interfaces(_alloc)
    , published_parameters(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _application_namespace_type;
  _application_namespace_type application_namespace;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _remote_controller_type;
  _remote_controller_type remote_controller;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rapp_status_type;
  _rapp_status_type rapp_status;

   typedef  ::rocon_app_manager_msgs::Rapp_<ContainerAllocator>  _rapp_type;
  _rapp_type rapp;

   typedef std::vector< ::rocon_app_manager_msgs::PublishedInterface_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rocon_app_manager_msgs::PublishedInterface_<ContainerAllocator> >::other >  _published_interfaces_type;
  _published_interfaces_type published_interfaces;

   typedef std::vector< ::rocon_std_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::other >  _published_parameters_type;
  _published_parameters_type published_parameters;


    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RAPP_STOPPED;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RAPP_RUNNING;
 

  typedef boost::shared_ptr< ::rocon_app_manager_msgs::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_app_manager_msgs::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::rocon_app_manager_msgs::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::rocon_app_manager_msgs::Status > StatusPtr;
typedef boost::shared_ptr< ::rocon_app_manager_msgs::Status const> StatusConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::RAPP_STOPPED =
        
          "stopped"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::RAPP_RUNNING =
        
          "running"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_app_manager_msgs::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_app_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_std_msgs/msg', '/home/turtlebot/ese_team_project/rocon/devel/share/rocon_std_msgs/msg'], 'rocon_service_pair_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_service_pair_msgs/msg'], 'rocon_app_manager_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_app_manager_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "845a2087bbeabf6770c4fda9fcc80442";
  }

  static const char* value(const ::rocon_app_manager_msgs::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x845a2087bbeabf67ULL;
  static const uint64_t static_value2 = 0x70c4fda9fcc80442ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_app_manager_msgs/Status";
  }

  static const char* value(const ::rocon_app_manager_msgs::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Namespace under which applications will run if connected\n\
string application_namespace\n\
\n\
# Who is controlling the app manager (i.e. who invited it to send it's\n\
# control handles). If the empty string, it is not being controlled \n\
# and subsequently is available\n\
string remote_controller\n\
\n\
# Rapp is running or not\n\
string RAPP_STOPPED=stopped\n\
string RAPP_RUNNING=running\n\
string rapp_status\n\
\n\
# Current app details (if running), a default Rapp() (filled with empty strings and lists) otherwise\n\
Rapp rapp\n\
\n\
# The runtime, possibly namespaced and remapped interfaces/parameters\n\
PublishedInterface[] published_interfaces\n\
rocon_std_msgs/KeyValue[] published_parameters\n\
\n\
================================================================================\n\
MSG: rocon_app_manager_msgs/Rapp\n\
# This is the message that gets published in list_rapps. Do not think of it as the\n\
# 'rapp' definition (since that is quite varied -> ancestor, virtual, child, implementation)\n\
# Rather it is the published list of rapps with the required information for the concert\n\
# and some introspection.\n\
\n\
# app name (ros resource name format, i.e. pkg/name, e.g. turtle_concert/teleop)\n\
string name\n\
# user-friendly display name\n\
string display_name\n\
string description\n\
# a rocon uri string indicating platform compatibility\n\
string compatibility\n\
string status\n\
\n\
# a list of implementations\n\
string[] implementations\n\
\n\
# A preferred rapp for virtual rapp\n\
string preferred\n\
\n\
# icon for showing the app\n\
rocon_std_msgs/Icon icon\n\
\n\
# public interface and parameters\n\
rocon_std_msgs/KeyValue[] public_interface\n\
rocon_std_msgs/KeyValue[] public_parameters\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/Icon\n\
# Used to idenfity the original package/filename resource this icon was/is to be loaded from\n\
# This typically doesn't have to be set, but can be very useful when loading icons from yaml definitions.\n\
string resource_name\n\
\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
================================================================================\n\
MSG: rocon_std_msgs/KeyValue\n\
string key\n\
string value\n\
================================================================================\n\
MSG: rocon_app_manager_msgs/PublishedInterface\n\
# The runtime, possibly namespaced and remapped public interface.\n\
\n\
PublicInterface interface\n\
\n\
# Final absolute namespaced/remapped name of the topic/service/action xxx\n\
string name\n\
================================================================================\n\
MSG: rocon_app_manager_msgs/PublicInterface\n\
# Represents a public interface of a rapp\n\
\n\
# One of rocon_std_msgs.Connection type string constants ('publisher, 'subscriber', ...)\n\
string connection_type\n\
\n\
# The data type, e.g. std_msgs/Strings\n\
string data_type\n\
\n\
# Name of the topic/service/action xxx.\n\
string name\n\
\n\
";
  }

  static const char* value(const ::rocon_app_manager_msgs::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.application_namespace);
      stream.next(m.remote_controller);
      stream.next(m.rapp_status);
      stream.next(m.rapp);
      stream.next(m.published_interfaces);
      stream.next(m.published_parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_app_manager_msgs::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_app_manager_msgs::Status_<ContainerAllocator>& v)
  {
    s << indent << "application_namespace: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.application_namespace);
    s << indent << "remote_controller: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.remote_controller);
    s << indent << "rapp_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rapp_status);
    s << indent << "rapp: ";
    s << std::endl;
    Printer< ::rocon_app_manager_msgs::Rapp_<ContainerAllocator> >::stream(s, indent + "  ", v.rapp);
    s << indent << "published_interfaces[]" << std::endl;
    for (size_t i = 0; i < v.published_interfaces.size(); ++i)
    {
      s << indent << "  published_interfaces[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rocon_app_manager_msgs::PublishedInterface_<ContainerAllocator> >::stream(s, indent + "    ", v.published_interfaces[i]);
    }
    s << indent << "published_parameters[]" << std::endl;
    for (size_t i = 0; i < v.published_parameters.size(); ++i)
    {
      s << indent << "  published_parameters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.published_parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_STATUS_H
