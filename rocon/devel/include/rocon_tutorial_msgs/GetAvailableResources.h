// Generated by gencpp from file rocon_tutorial_msgs/GetAvailableResources.msg
// DO NOT EDIT!


#ifndef ROCON_TUTORIAL_MSGS_MESSAGE_GETAVAILABLERESOURCES_H
#define ROCON_TUTORIAL_MSGS_MESSAGE_GETAVAILABLERESOURCES_H

#include <ros/service_traits.h>


#include <rocon_tutorial_msgs/GetAvailableResourcesRequest.h>
#include <rocon_tutorial_msgs/GetAvailableResourcesResponse.h>


namespace rocon_tutorial_msgs
{

struct GetAvailableResources
{

typedef GetAvailableResourcesRequest Request;
typedef GetAvailableResourcesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAvailableResources
} // namespace rocon_tutorial_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rocon_tutorial_msgs::GetAvailableResources > {
  static const char* value()
  {
    return "b8917c59e7f27df2ec9f8142cd23fade";
  }

  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResources&) { return value(); }
};

template<>
struct DataType< ::rocon_tutorial_msgs::GetAvailableResources > {
  static const char* value()
  {
    return "rocon_tutorial_msgs/GetAvailableResources";
  }

  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResources&) { return value(); }
};


// service_traits::MD5Sum< ::rocon_tutorial_msgs::GetAvailableResourcesRequest> should match 
// service_traits::MD5Sum< ::rocon_tutorial_msgs::GetAvailableResources > 
template<>
struct MD5Sum< ::rocon_tutorial_msgs::GetAvailableResourcesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_tutorial_msgs::GetAvailableResources >::value();
  }
  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResourcesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_tutorial_msgs::GetAvailableResourcesRequest> should match 
// service_traits::DataType< ::rocon_tutorial_msgs::GetAvailableResources > 
template<>
struct DataType< ::rocon_tutorial_msgs::GetAvailableResourcesRequest>
{
  static const char* value()
  {
    return DataType< ::rocon_tutorial_msgs::GetAvailableResources >::value();
  }
  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResourcesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rocon_tutorial_msgs::GetAvailableResourcesResponse> should match 
// service_traits::MD5Sum< ::rocon_tutorial_msgs::GetAvailableResources > 
template<>
struct MD5Sum< ::rocon_tutorial_msgs::GetAvailableResourcesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_tutorial_msgs::GetAvailableResources >::value();
  }
  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResourcesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_tutorial_msgs::GetAvailableResourcesResponse> should match 
// service_traits::DataType< ::rocon_tutorial_msgs::GetAvailableResources > 
template<>
struct DataType< ::rocon_tutorial_msgs::GetAvailableResourcesResponse>
{
  static const char* value()
  {
    return DataType< ::rocon_tutorial_msgs::GetAvailableResources >::value();
  }
  static const char* value(const ::rocon_tutorial_msgs::GetAvailableResourcesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROCON_TUTORIAL_MSGS_MESSAGE_GETAVAILABLERESOURCES_H
