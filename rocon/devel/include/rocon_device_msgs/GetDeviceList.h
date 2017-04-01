// Generated by gencpp from file rocon_device_msgs/GetDeviceList.msg
// DO NOT EDIT!


#ifndef ROCON_DEVICE_MSGS_MESSAGE_GETDEVICELIST_H
#define ROCON_DEVICE_MSGS_MESSAGE_GETDEVICELIST_H

#include <ros/service_traits.h>


#include <rocon_device_msgs/GetDeviceListRequest.h>
#include <rocon_device_msgs/GetDeviceListResponse.h>


namespace rocon_device_msgs
{

struct GetDeviceList
{

typedef GetDeviceListRequest Request;
typedef GetDeviceListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDeviceList
} // namespace rocon_device_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rocon_device_msgs::GetDeviceList > {
  static const char* value()
  {
    return "47ac4241194bb5519686779949c9843b";
  }

  static const char* value(const ::rocon_device_msgs::GetDeviceList&) { return value(); }
};

template<>
struct DataType< ::rocon_device_msgs::GetDeviceList > {
  static const char* value()
  {
    return "rocon_device_msgs/GetDeviceList";
  }

  static const char* value(const ::rocon_device_msgs::GetDeviceList&) { return value(); }
};


// service_traits::MD5Sum< ::rocon_device_msgs::GetDeviceListRequest> should match 
// service_traits::MD5Sum< ::rocon_device_msgs::GetDeviceList > 
template<>
struct MD5Sum< ::rocon_device_msgs::GetDeviceListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_device_msgs::GetDeviceList >::value();
  }
  static const char* value(const ::rocon_device_msgs::GetDeviceListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_device_msgs::GetDeviceListRequest> should match 
// service_traits::DataType< ::rocon_device_msgs::GetDeviceList > 
template<>
struct DataType< ::rocon_device_msgs::GetDeviceListRequest>
{
  static const char* value()
  {
    return DataType< ::rocon_device_msgs::GetDeviceList >::value();
  }
  static const char* value(const ::rocon_device_msgs::GetDeviceListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rocon_device_msgs::GetDeviceListResponse> should match 
// service_traits::MD5Sum< ::rocon_device_msgs::GetDeviceList > 
template<>
struct MD5Sum< ::rocon_device_msgs::GetDeviceListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_device_msgs::GetDeviceList >::value();
  }
  static const char* value(const ::rocon_device_msgs::GetDeviceListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_device_msgs::GetDeviceListResponse> should match 
// service_traits::DataType< ::rocon_device_msgs::GetDeviceList > 
template<>
struct DataType< ::rocon_device_msgs::GetDeviceListResponse>
{
  static const char* value()
  {
    return DataType< ::rocon_device_msgs::GetDeviceList >::value();
  }
  static const char* value(const ::rocon_device_msgs::GetDeviceListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROCON_DEVICE_MSGS_MESSAGE_GETDEVICELIST_H
