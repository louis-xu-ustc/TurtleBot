// Generated by gencpp from file gateway_msgs/GatewayInfo.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_GATEWAYINFO_H
#define GATEWAY_MSGS_MESSAGE_GATEWAYINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gateway_msgs/Rule.h>
#include <gateway_msgs/Rule.h>
#include <gateway_msgs/RemoteRuleWithStatus.h>
#include <gateway_msgs/RemoteRule.h>
#include <gateway_msgs/RemoteRule.h>
#include <gateway_msgs/RemoteRule.h>
#include <gateway_msgs/RemoteRule.h>

namespace gateway_msgs
{
template <class ContainerAllocator>
struct GatewayInfo_
{
  typedef GatewayInfo_<ContainerAllocator> Type;

  GatewayInfo_()
    : name()
    , connected(false)
    , ip()
    , hub_names()
    , hub_uris()
    , firewall(false)
    , public_watchlist()
    , public_interface()
    , flipped_connections()
    , flip_watchlist()
    , flipped_in_connections()
    , pull_watchlist()
    , pulled_connections()  {
    }
  GatewayInfo_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , connected(false)
    , ip(_alloc)
    , hub_names(_alloc)
    , hub_uris(_alloc)
    , firewall(false)
    , public_watchlist(_alloc)
    , public_interface(_alloc)
    , flipped_connections(_alloc)
    , flip_watchlist(_alloc)
    , flipped_in_connections(_alloc)
    , pull_watchlist(_alloc)
    , pulled_connections(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _connected_type;
  _connected_type connected;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ip_type;
  _ip_type ip;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _hub_names_type;
  _hub_names_type hub_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _hub_uris_type;
  _hub_uris_type hub_uris;

   typedef uint8_t _firewall_type;
  _firewall_type firewall;

   typedef std::vector< ::gateway_msgs::Rule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::Rule_<ContainerAllocator> >::other >  _public_watchlist_type;
  _public_watchlist_type public_watchlist;

   typedef std::vector< ::gateway_msgs::Rule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::Rule_<ContainerAllocator> >::other >  _public_interface_type;
  _public_interface_type public_interface;

   typedef std::vector< ::gateway_msgs::RemoteRuleWithStatus_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::RemoteRuleWithStatus_<ContainerAllocator> >::other >  _flipped_connections_type;
  _flipped_connections_type flipped_connections;

   typedef std::vector< ::gateway_msgs::RemoteRule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::other >  _flip_watchlist_type;
  _flip_watchlist_type flip_watchlist;

   typedef std::vector< ::gateway_msgs::RemoteRule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::other >  _flipped_in_connections_type;
  _flipped_in_connections_type flipped_in_connections;

   typedef std::vector< ::gateway_msgs::RemoteRule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::other >  _pull_watchlist_type;
  _pull_watchlist_type pull_watchlist;

   typedef std::vector< ::gateway_msgs::RemoteRule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::other >  _pulled_connections_type;
  _pulled_connections_type pulled_connections;




  typedef boost::shared_ptr< ::gateway_msgs::GatewayInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::GatewayInfo_<ContainerAllocator> const> ConstPtr;

}; // struct GatewayInfo_

typedef ::gateway_msgs::GatewayInfo_<std::allocator<void> > GatewayInfo;

typedef boost::shared_ptr< ::gateway_msgs::GatewayInfo > GatewayInfoPtr;
typedef boost::shared_ptr< ::gateway_msgs::GatewayInfo const> GatewayInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::GatewayInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gateway_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'gateway_msgs': ['/home/turtlebot/ese_team_project/rocon/src/rocon_msgs/gateway_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::GatewayInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::GatewayInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::GatewayInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e8f7efa326aa247c5cb6a9692ec8014";
  }

  static const char* value(const ::gateway_msgs::GatewayInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e8f7efa326aa247ULL;
  static const uint64_t static_value2 = 0xc5cb6a9692ec8014ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/GatewayInfo";
  }

  static const char* value(const ::gateway_msgs::GatewayInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "###### Gateway information ######\n\
\n\
# Gateway parameters\n\
string name\n\
bool connected\n\
string ip\n\
\n\
# Hub parameters\n\
string[] hub_names\n\
string[] hub_uris\n\
\n\
bool firewall\n\
\n\
###### Public Interface ######\n\
\n\
Rule[] public_watchlist\n\
Rule[] public_interface\n\
\n\
###### Flipped Interface ######\n\
\n\
RemoteRuleWithStatus[] flipped_connections\n\
RemoteRule[] flip_watchlist\n\
RemoteRule[] flipped_in_connections\n\
\n\
###### Pulled Interface ######\n\
\n\
RemoteRule[] pull_watchlist\n\
RemoteRule[] pulled_connections\n\
\n\
\n\
================================================================================\n\
MSG: gateway_msgs/Rule\n\
# Standard gateway connection rule\n\
\n\
# type of connection (from gateway_msgs.msg.Connection)\n\
string type\n\
\n\
# this is the topic/service name or the action base name (a regex is supported)\n\
string name \n\
\n\
# (optional) an optional node name can be provided. if node name is not provided\n\
# then all nodes are matched (also supports regex)\n\
string node\n\
\n\
================================================================================\n\
MSG: gateway_msgs/RemoteRuleWithStatus\n\
# The remote rule whose status is being defined here\n\
RemoteRule remote_rule\n\
\n\
# Whether the flip is still pending, was accepted \n\
string UNKNOWN=unknown\n\
string PENDING=pending\n\
string ACCEPTED=accepted\n\
string BLOCKED=blocked\n\
string RESEND=resend\n\
string status\n\
\n\
================================================================================\n\
MSG: gateway_msgs/RemoteRule\n\
# Definition for a flip. It represents either:\n\
#\n\
# 1) an existing flipped connection (from the local gateway)\n\
# 2) a rule that is put on a watchlist\n\
\n\
# The target recipient of the flip\n\
string gateway\n\
\n\
# Connection has the following parameters that need setting\n\
# - name : fully qualified name of the connection (str)\n\
# - type : connection type (str)\n\
#  \n\
# Use one of the types defined in Connection string constants:\n\
#     (publisher, subscriber, service, action_client, action_server)\n\
#\n\
# - node : name of the node it originates from (str)(optional)\n\
#\n\
# Node name is necessary, for instance, if you have multiple subscribers\n\
# publishing to a single topic. Most of the time it is not necessary,\n\
# but in some cases it helps refine the rule. It helps refine the rule.\n\
#\n\
Rule rule\n\
";
  }

  static const char* value(const ::gateway_msgs::GatewayInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.connected);
      stream.next(m.ip);
      stream.next(m.hub_names);
      stream.next(m.hub_uris);
      stream.next(m.firewall);
      stream.next(m.public_watchlist);
      stream.next(m.public_interface);
      stream.next(m.flipped_connections);
      stream.next(m.flip_watchlist);
      stream.next(m.flipped_in_connections);
      stream.next(m.pull_watchlist);
      stream.next(m.pulled_connections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GatewayInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::GatewayInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gateway_msgs::GatewayInfo_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connected);
    s << indent << "ip: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ip);
    s << indent << "hub_names[]" << std::endl;
    for (size_t i = 0; i < v.hub_names.size(); ++i)
    {
      s << indent << "  hub_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hub_names[i]);
    }
    s << indent << "hub_uris[]" << std::endl;
    for (size_t i = 0; i < v.hub_uris.size(); ++i)
    {
      s << indent << "  hub_uris[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hub_uris[i]);
    }
    s << indent << "firewall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.firewall);
    s << indent << "public_watchlist[]" << std::endl;
    for (size_t i = 0; i < v.public_watchlist.size(); ++i)
    {
      s << indent << "  public_watchlist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::Rule_<ContainerAllocator> >::stream(s, indent + "    ", v.public_watchlist[i]);
    }
    s << indent << "public_interface[]" << std::endl;
    for (size_t i = 0; i < v.public_interface.size(); ++i)
    {
      s << indent << "  public_interface[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::Rule_<ContainerAllocator> >::stream(s, indent + "    ", v.public_interface[i]);
    }
    s << indent << "flipped_connections[]" << std::endl;
    for (size_t i = 0; i < v.flipped_connections.size(); ++i)
    {
      s << indent << "  flipped_connections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::RemoteRuleWithStatus_<ContainerAllocator> >::stream(s, indent + "    ", v.flipped_connections[i]);
    }
    s << indent << "flip_watchlist[]" << std::endl;
    for (size_t i = 0; i < v.flip_watchlist.size(); ++i)
    {
      s << indent << "  flip_watchlist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::stream(s, indent + "    ", v.flip_watchlist[i]);
    }
    s << indent << "flipped_in_connections[]" << std::endl;
    for (size_t i = 0; i < v.flipped_in_connections.size(); ++i)
    {
      s << indent << "  flipped_in_connections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::stream(s, indent + "    ", v.flipped_in_connections[i]);
    }
    s << indent << "pull_watchlist[]" << std::endl;
    for (size_t i = 0; i < v.pull_watchlist.size(); ++i)
    {
      s << indent << "  pull_watchlist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::stream(s, indent + "    ", v.pull_watchlist[i]);
    }
    s << indent << "pulled_connections[]" << std::endl;
    for (size_t i = 0; i < v.pulled_connections.size(); ++i)
    {
      s << indent << "  pulled_connections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::RemoteRule_<ContainerAllocator> >::stream(s, indent + "    ", v.pulled_connections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_GATEWAYINFO_H
