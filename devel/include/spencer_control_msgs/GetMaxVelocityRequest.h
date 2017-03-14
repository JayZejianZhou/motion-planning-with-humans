// Generated by gencpp from file spencer_control_msgs/GetMaxVelocityRequest.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYREQUEST_H
#define SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_control_msgs
{
template <class ContainerAllocator>
struct GetMaxVelocityRequest_
{
  typedef GetMaxVelocityRequest_<ContainerAllocator> Type;

  GetMaxVelocityRequest_()
    {
    }
  GetMaxVelocityRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMaxVelocityRequest_

typedef ::spencer_control_msgs::GetMaxVelocityRequest_<std::allocator<void> > GetMaxVelocityRequest;

typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityRequest > GetMaxVelocityRequestPtr;
typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityRequest const> GetMaxVelocityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_control_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/control/spencer_control_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_control_msgs/GetMaxVelocityRequest";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMaxVelocityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::spencer_control_msgs::GetMaxVelocityRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYREQUEST_H
