// Generated by gencpp from file rocon_interaction_msgs/GetInteractionResponse.msg
// DO NOT EDIT!


#ifndef ROCON_INTERACTION_MSGS_MESSAGE_GETINTERACTIONRESPONSE_H
#define ROCON_INTERACTION_MSGS_MESSAGE_GETINTERACTIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_interaction_msgs/Interaction.h>

namespace rocon_interaction_msgs
{
template <class ContainerAllocator>
struct GetInteractionResponse_
{
  typedef GetInteractionResponse_<ContainerAllocator> Type;

  GetInteractionResponse_()
    : result(false)
    , interaction()  {
    }
  GetInteractionResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , interaction(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef  ::rocon_interaction_msgs::Interaction_<ContainerAllocator>  _interaction_type;
  _interaction_type interaction;




  typedef boost::shared_ptr< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetInteractionResponse_

typedef ::rocon_interaction_msgs::GetInteractionResponse_<std::allocator<void> > GetInteractionResponse;

typedef boost::shared_ptr< ::rocon_interaction_msgs::GetInteractionResponse > GetInteractionResponsePtr;
typedef boost::shared_ptr< ::rocon_interaction_msgs::GetInteractionResponse const> GetInteractionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_std_msgs/msg', '/home/turtlebot/ese_team_project/rocon/devel/share/rocon_std_msgs/msg'], 'rocon_service_pair_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_service_pair_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rocon_interaction_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/rocon_interaction_msgs/msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abffed0d9b7b8b5c3540f9e86db39f52";
  }

  static const char* value(const ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xabffed0d9b7b8b5cULL;
  static const uint64_t static_value2 = 0x3540f9e86db39f52ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_interaction_msgs/GetInteractionResponse";
  }

  static const char* value(const ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool result\n\
Interaction interaction\n\
\n\
\n\
================================================================================\n\
MSG: rocon_interaction_msgs/Interaction\n\
###############################################################\n\
# Non-modifiable Specifications\n\
###############################################################\n\
# These should be stored in a meta-repository somewhere.\n\
#\n\
# Name of the interaction. This should be the string\n\
# required to install and execute the application on the remocon's\n\
# end. e.g. for android app this will be an intent action name such as\n\
# com.github.rosjava.android_apps.listener.Listener, while for\n\
# a web app it will be its URL.\n\
string name\n\
\n\
# A rocon uri string denoting the platforms this interaction\n\
# is compatible with\n\
string compatibility\n\
\n\
###############################################################\n\
# Variable Specifications\n\
###############################################################\n\
\n\
# User friendly version of the name. Useful to be customised\n\
# differently from the name for either 1) branding, or 2) because\n\
# some names are complicated visually (e.g. android names).\n\
string display_name\n\
 \n\
# Should be a default for the interaction, but sometimes useful to\n\
# override it to provide more human friendly information.\n\
string description\n\
\n\
# The namespace that this interaction will be associated\n\
# with. Interfaces from the interaction will be automatically pushed\n\
# into this namespace (for concerts it will be typically\n\
# used by the services to push interfaces into /services/_service_name_).\n\
# It is up to the user to make sure this is unique to avoid\n\
# potential conflicts.\n\
string namespace\n\
\n\
# Again, should exist a default, but may want to override it.\n\
rocon_std_msgs/Icon icon\n\
\n\
# Any remappings that need to be applied\n\
rocon_std_msgs/Remapping[] remappings\n\
\n\
# Yaml string representing parameters for the interaction\n\
string parameters\n\
\n\
# Maximum number of permitted connections (-1 = any)\n\
int32 UNLIMITED_INTERACTIONS = -1\n\
int32 max\n\
\n\
# The configuration for a pairing if this interaction is to be paired\n\
# with a rapp. If not, it should be left unfilled.\n\
Pairing pairing\n\
\n\
###############################################################\n\
# Parameters finalised by the interactions manager\n\
###############################################################\n\
\n\
# This is a crc32 hash code for the service-role-name\n\
# unique string that identifies this interaction.\n\
# crc32 gets a few collisions, so we should be careful of that.\n\
# It is used by the nfc android auto-launching program so we can\n\
# compactify the request in the url sent by the nfc to the autolauncher.\n\
int32 hash\n\
\n\
# The role this solution has configured the interaction for. This is in\n\
# some use cases redundant, and in other use cases essential (e.g.\n\
# headless launcher)\n\
string role\n\
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
MSG: rocon_std_msgs/Remapping\n\
# Describes your typical ros remapping\n\
\n\
string remap_from\n\
string remap_to\n\
\n\
================================================================================\n\
MSG: rocon_interaction_msgs/Pairing\n\
# Properties of a paired app that is destined to work with a rocon interaction.\n\
\n\
# ros resource name of the rapp, e.g. rocon_apps/talker\n\
string rapp\n\
\n\
rocon_std_msgs/Remapping[] remappings\n\
\n\
# Key value pairs representing rapp parameters\n\
rocon_std_msgs/KeyValue[] parameters\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/KeyValue\n\
string key\n\
string value\n\
";
  }

  static const char* value(const ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.interaction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetInteractionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_interaction_msgs::GetInteractionResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "interaction: ";
    s << std::endl;
    Printer< ::rocon_interaction_msgs::Interaction_<ContainerAllocator> >::stream(s, indent + "  ", v.interaction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_INTERACTION_MSGS_MESSAGE_GETINTERACTIONRESPONSE_H
