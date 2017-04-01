// Generated by gencpp from file world_canvas_msgs/PubAnnotationsData.msg
// DO NOT EDIT!


#ifndef WORLD_CANVAS_MSGS_MESSAGE_PUBANNOTATIONSDATA_H
#define WORLD_CANVAS_MSGS_MESSAGE_PUBANNOTATIONSDATA_H

#include <ros/service_traits.h>


#include <world_canvas_msgs/PubAnnotationsDataRequest.h>
#include <world_canvas_msgs/PubAnnotationsDataResponse.h>


namespace world_canvas_msgs
{

struct PubAnnotationsData
{

typedef PubAnnotationsDataRequest Request;
typedef PubAnnotationsDataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PubAnnotationsData
} // namespace world_canvas_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::world_canvas_msgs::PubAnnotationsData > {
  static const char* value()
  {
    return "efc54bf1b4a6309b22d598d89ee85d1f";
  }

  static const char* value(const ::world_canvas_msgs::PubAnnotationsData&) { return value(); }
};

template<>
struct DataType< ::world_canvas_msgs::PubAnnotationsData > {
  static const char* value()
  {
    return "world_canvas_msgs/PubAnnotationsData";
  }

  static const char* value(const ::world_canvas_msgs::PubAnnotationsData&) { return value(); }
};


// service_traits::MD5Sum< ::world_canvas_msgs::PubAnnotationsDataRequest> should match 
// service_traits::MD5Sum< ::world_canvas_msgs::PubAnnotationsData > 
template<>
struct MD5Sum< ::world_canvas_msgs::PubAnnotationsDataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::world_canvas_msgs::PubAnnotationsData >::value();
  }
  static const char* value(const ::world_canvas_msgs::PubAnnotationsDataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::world_canvas_msgs::PubAnnotationsDataRequest> should match 
// service_traits::DataType< ::world_canvas_msgs::PubAnnotationsData > 
template<>
struct DataType< ::world_canvas_msgs::PubAnnotationsDataRequest>
{
  static const char* value()
  {
    return DataType< ::world_canvas_msgs::PubAnnotationsData >::value();
  }
  static const char* value(const ::world_canvas_msgs::PubAnnotationsDataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::world_canvas_msgs::PubAnnotationsDataResponse> should match 
// service_traits::MD5Sum< ::world_canvas_msgs::PubAnnotationsData > 
template<>
struct MD5Sum< ::world_canvas_msgs::PubAnnotationsDataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::world_canvas_msgs::PubAnnotationsData >::value();
  }
  static const char* value(const ::world_canvas_msgs::PubAnnotationsDataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::world_canvas_msgs::PubAnnotationsDataResponse> should match 
// service_traits::DataType< ::world_canvas_msgs::PubAnnotationsData > 
template<>
struct DataType< ::world_canvas_msgs::PubAnnotationsDataResponse>
{
  static const char* value()
  {
    return DataType< ::world_canvas_msgs::PubAnnotationsData >::value();
  }
  static const char* value(const ::world_canvas_msgs::PubAnnotationsDataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WORLD_CANVAS_MSGS_MESSAGE_PUBANNOTATIONSDATA_H
