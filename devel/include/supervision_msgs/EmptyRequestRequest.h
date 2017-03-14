// Generated by gencpp from file supervision_msgs/EmptyRequestRequest.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_EMPTYREQUESTREQUEST_H
#define SUPERVISION_MSGS_MESSAGE_EMPTYREQUESTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace supervision_msgs
{
template <class ContainerAllocator>
struct EmptyRequestRequest_
{
  typedef EmptyRequestRequest_<ContainerAllocator> Type;

  EmptyRequestRequest_()
    {
    }
  EmptyRequestRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EmptyRequestRequest_

typedef ::supervision_msgs::EmptyRequestRequest_<std::allocator<void> > EmptyRequestRequest;

typedef boost::shared_ptr< ::supervision_msgs::EmptyRequestRequest > EmptyRequestRequestPtr;
typedef boost::shared_ptr< ::supervision_msgs::EmptyRequestRequest const> EmptyRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace supervision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'supervision_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/supervision/supervision_msgs/msg', '/home/zejian/catkin_ws/devel/share/supervision_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervision_msgs/EmptyRequestRequest";
  }

  static const char* value(const ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EmptyRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::supervision_msgs::EmptyRequestRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_EMPTYREQUESTREQUEST_H
