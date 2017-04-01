// Generated by gencpp from file rocon_app_manager_msgs/Init.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_INIT_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_INIT_H

#include <ros/service_traits.h>


#include <rocon_app_manager_msgs/InitRequest.h>
#include <rocon_app_manager_msgs/InitResponse.h>


namespace rocon_app_manager_msgs
{

struct Init
{

typedef InitRequest Request;
typedef InitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Init
} // namespace rocon_app_manager_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rocon_app_manager_msgs::Init > {
  static const char* value()
  {
    return "ee91d68745ef4d7a247816a59dffedf2";
  }

  static const char* value(const ::rocon_app_manager_msgs::Init&) { return value(); }
};

template<>
struct DataType< ::rocon_app_manager_msgs::Init > {
  static const char* value()
  {
    return "rocon_app_manager_msgs/Init";
  }

  static const char* value(const ::rocon_app_manager_msgs::Init&) { return value(); }
};


// service_traits::MD5Sum< ::rocon_app_manager_msgs::InitRequest> should match 
// service_traits::MD5Sum< ::rocon_app_manager_msgs::Init > 
template<>
struct MD5Sum< ::rocon_app_manager_msgs::InitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_app_manager_msgs::Init >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::InitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_app_manager_msgs::InitRequest> should match 
// service_traits::DataType< ::rocon_app_manager_msgs::Init > 
template<>
struct DataType< ::rocon_app_manager_msgs::InitRequest>
{
  static const char* value()
  {
    return DataType< ::rocon_app_manager_msgs::Init >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::InitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rocon_app_manager_msgs::InitResponse> should match 
// service_traits::MD5Sum< ::rocon_app_manager_msgs::Init > 
template<>
struct MD5Sum< ::rocon_app_manager_msgs::InitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rocon_app_manager_msgs::Init >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::InitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rocon_app_manager_msgs::InitResponse> should match 
// service_traits::DataType< ::rocon_app_manager_msgs::Init > 
template<>
struct DataType< ::rocon_app_manager_msgs::InitResponse>
{
  static const char* value()
  {
    return DataType< ::rocon_app_manager_msgs::Init >::value();
  }
  static const char* value(const ::rocon_app_manager_msgs::InitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_INIT_H
