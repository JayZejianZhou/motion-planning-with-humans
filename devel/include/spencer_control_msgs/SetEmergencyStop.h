// Generated by gencpp from file spencer_control_msgs/SetEmergencyStop.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOP_H
#define SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOP_H

#include <ros/service_traits.h>


#include <spencer_control_msgs/SetEmergencyStopRequest.h>
#include <spencer_control_msgs/SetEmergencyStopResponse.h>


namespace spencer_control_msgs
{

struct SetEmergencyStop
{

typedef SetEmergencyStopRequest Request;
typedef SetEmergencyStopResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetEmergencyStop
} // namespace spencer_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::spencer_control_msgs::SetEmergencyStop > {
  static const char* value()
  {
    return "d2838a5b80262371973005b47940876f";
  }

  static const char* value(const ::spencer_control_msgs::SetEmergencyStop&) { return value(); }
};

template<>
struct DataType< ::spencer_control_msgs::SetEmergencyStop > {
  static const char* value()
  {
    return "spencer_control_msgs/SetEmergencyStop";
  }

  static const char* value(const ::spencer_control_msgs::SetEmergencyStop&) { return value(); }
};


// service_traits::MD5Sum< ::spencer_control_msgs::SetEmergencyStopRequest> should match 
// service_traits::MD5Sum< ::spencer_control_msgs::SetEmergencyStop > 
template<>
struct MD5Sum< ::spencer_control_msgs::SetEmergencyStopRequest>
{
  static const char* value()
  {
    return MD5Sum< ::spencer_control_msgs::SetEmergencyStop >::value();
  }
  static const char* value(const ::spencer_control_msgs::SetEmergencyStopRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::spencer_control_msgs::SetEmergencyStopRequest> should match 
// service_traits::DataType< ::spencer_control_msgs::SetEmergencyStop > 
template<>
struct DataType< ::spencer_control_msgs::SetEmergencyStopRequest>
{
  static const char* value()
  {
    return DataType< ::spencer_control_msgs::SetEmergencyStop >::value();
  }
  static const char* value(const ::spencer_control_msgs::SetEmergencyStopRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::spencer_control_msgs::SetEmergencyStopResponse> should match 
// service_traits::MD5Sum< ::spencer_control_msgs::SetEmergencyStop > 
template<>
struct MD5Sum< ::spencer_control_msgs::SetEmergencyStopResponse>
{
  static const char* value()
  {
    return MD5Sum< ::spencer_control_msgs::SetEmergencyStop >::value();
  }
  static const char* value(const ::spencer_control_msgs::SetEmergencyStopResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::spencer_control_msgs::SetEmergencyStopResponse> should match 
// service_traits::DataType< ::spencer_control_msgs::SetEmergencyStop > 
template<>
struct DataType< ::spencer_control_msgs::SetEmergencyStopResponse>
{
  static const char* value()
  {
    return DataType< ::spencer_control_msgs::SetEmergencyStop >::value();
  }
  static const char* value(const ::spencer_control_msgs::SetEmergencyStopResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOP_H
