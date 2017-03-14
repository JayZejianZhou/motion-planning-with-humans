// Generated by gencpp from file supervision_msgs/GetConnectedNodes.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_GETCONNECTEDNODES_H
#define SUPERVISION_MSGS_MESSAGE_GETCONNECTEDNODES_H

#include <ros/service_traits.h>


#include <supervision_msgs/GetConnectedNodesRequest.h>
#include <supervision_msgs/GetConnectedNodesResponse.h>


namespace supervision_msgs
{

struct GetConnectedNodes
{

typedef GetConnectedNodesRequest Request;
typedef GetConnectedNodesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetConnectedNodes
} // namespace supervision_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::supervision_msgs::GetConnectedNodes > {
  static const char* value()
  {
    return "62c02cb4f61e9f49c378518abb18ee45";
  }

  static const char* value(const ::supervision_msgs::GetConnectedNodes&) { return value(); }
};

template<>
struct DataType< ::supervision_msgs::GetConnectedNodes > {
  static const char* value()
  {
    return "supervision_msgs/GetConnectedNodes";
  }

  static const char* value(const ::supervision_msgs::GetConnectedNodes&) { return value(); }
};


// service_traits::MD5Sum< ::supervision_msgs::GetConnectedNodesRequest> should match 
// service_traits::MD5Sum< ::supervision_msgs::GetConnectedNodes > 
template<>
struct MD5Sum< ::supervision_msgs::GetConnectedNodesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::supervision_msgs::GetConnectedNodes >::value();
  }
  static const char* value(const ::supervision_msgs::GetConnectedNodesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervision_msgs::GetConnectedNodesRequest> should match 
// service_traits::DataType< ::supervision_msgs::GetConnectedNodes > 
template<>
struct DataType< ::supervision_msgs::GetConnectedNodesRequest>
{
  static const char* value()
  {
    return DataType< ::supervision_msgs::GetConnectedNodes >::value();
  }
  static const char* value(const ::supervision_msgs::GetConnectedNodesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::supervision_msgs::GetConnectedNodesResponse> should match 
// service_traits::MD5Sum< ::supervision_msgs::GetConnectedNodes > 
template<>
struct MD5Sum< ::supervision_msgs::GetConnectedNodesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::supervision_msgs::GetConnectedNodes >::value();
  }
  static const char* value(const ::supervision_msgs::GetConnectedNodesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervision_msgs::GetConnectedNodesResponse> should match 
// service_traits::DataType< ::supervision_msgs::GetConnectedNodes > 
template<>
struct DataType< ::supervision_msgs::GetConnectedNodesResponse>
{
  static const char* value()
  {
    return DataType< ::supervision_msgs::GetConnectedNodes >::value();
  }
  static const char* value(const ::supervision_msgs::GetConnectedNodesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_GETCONNECTEDNODES_H
