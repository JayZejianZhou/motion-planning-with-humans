// Generated by gencpp from file situation_assessment_msgs/EmptyRequest.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_EMPTYREQUEST_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_EMPTYREQUEST_H

#include <ros/service_traits.h>


#include <situation_assessment_msgs/EmptyRequestRequest.h>
#include <situation_assessment_msgs/EmptyRequestResponse.h>


namespace situation_assessment_msgs
{

struct EmptyRequest
{

typedef EmptyRequestRequest Request;
typedef EmptyRequestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EmptyRequest
} // namespace situation_assessment_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::situation_assessment_msgs::EmptyRequest > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::situation_assessment_msgs::EmptyRequest&) { return value(); }
};

template<>
struct DataType< ::situation_assessment_msgs::EmptyRequest > {
  static const char* value()
  {
    return "situation_assessment_msgs/EmptyRequest";
  }

  static const char* value(const ::situation_assessment_msgs::EmptyRequest&) { return value(); }
};


// service_traits::MD5Sum< ::situation_assessment_msgs::EmptyRequestRequest> should match 
// service_traits::MD5Sum< ::situation_assessment_msgs::EmptyRequest > 
template<>
struct MD5Sum< ::situation_assessment_msgs::EmptyRequestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::situation_assessment_msgs::EmptyRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::EmptyRequestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::situation_assessment_msgs::EmptyRequestRequest> should match 
// service_traits::DataType< ::situation_assessment_msgs::EmptyRequest > 
template<>
struct DataType< ::situation_assessment_msgs::EmptyRequestRequest>
{
  static const char* value()
  {
    return DataType< ::situation_assessment_msgs::EmptyRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::EmptyRequestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::situation_assessment_msgs::EmptyRequestResponse> should match 
// service_traits::MD5Sum< ::situation_assessment_msgs::EmptyRequest > 
template<>
struct MD5Sum< ::situation_assessment_msgs::EmptyRequestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::situation_assessment_msgs::EmptyRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::EmptyRequestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::situation_assessment_msgs::EmptyRequestResponse> should match 
// service_traits::DataType< ::situation_assessment_msgs::EmptyRequest > 
template<>
struct DataType< ::situation_assessment_msgs::EmptyRequestResponse>
{
  static const char* value()
  {
    return DataType< ::situation_assessment_msgs::EmptyRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::EmptyRequestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_EMPTYREQUEST_H
