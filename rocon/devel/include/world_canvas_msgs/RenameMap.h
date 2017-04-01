// Generated by gencpp from file world_canvas_msgs/RenameMap.msg
// DO NOT EDIT!


#ifndef WORLD_CANVAS_MSGS_MESSAGE_RENAMEMAP_H
#define WORLD_CANVAS_MSGS_MESSAGE_RENAMEMAP_H

#include <ros/service_traits.h>


#include <world_canvas_msgs/RenameMapRequest.h>
#include <world_canvas_msgs/RenameMapResponse.h>


namespace world_canvas_msgs
{

struct RenameMap
{

typedef RenameMapRequest Request;
typedef RenameMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RenameMap
} // namespace world_canvas_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::world_canvas_msgs::RenameMap > {
  static const char* value()
  {
    return "94f4d84fa2d3173899807933af417784";
  }

  static const char* value(const ::world_canvas_msgs::RenameMap&) { return value(); }
};

template<>
struct DataType< ::world_canvas_msgs::RenameMap > {
  static const char* value()
  {
    return "world_canvas_msgs/RenameMap";
  }

  static const char* value(const ::world_canvas_msgs::RenameMap&) { return value(); }
};


// service_traits::MD5Sum< ::world_canvas_msgs::RenameMapRequest> should match 
// service_traits::MD5Sum< ::world_canvas_msgs::RenameMap > 
template<>
struct MD5Sum< ::world_canvas_msgs::RenameMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::world_canvas_msgs::RenameMap >::value();
  }
  static const char* value(const ::world_canvas_msgs::RenameMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::world_canvas_msgs::RenameMapRequest> should match 
// service_traits::DataType< ::world_canvas_msgs::RenameMap > 
template<>
struct DataType< ::world_canvas_msgs::RenameMapRequest>
{
  static const char* value()
  {
    return DataType< ::world_canvas_msgs::RenameMap >::value();
  }
  static const char* value(const ::world_canvas_msgs::RenameMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::world_canvas_msgs::RenameMapResponse> should match 
// service_traits::MD5Sum< ::world_canvas_msgs::RenameMap > 
template<>
struct MD5Sum< ::world_canvas_msgs::RenameMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::world_canvas_msgs::RenameMap >::value();
  }
  static const char* value(const ::world_canvas_msgs::RenameMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::world_canvas_msgs::RenameMapResponse> should match 
// service_traits::DataType< ::world_canvas_msgs::RenameMap > 
template<>
struct DataType< ::world_canvas_msgs::RenameMapResponse>
{
  static const char* value()
  {
    return DataType< ::world_canvas_msgs::RenameMap >::value();
  }
  static const char* value(const ::world_canvas_msgs::RenameMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WORLD_CANVAS_MSGS_MESSAGE_RENAMEMAP_H
