// Generated by gencpp from file spencer_control_msgs/SetEmergencyStopRequest.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOPREQUEST_H
#define SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOPREQUEST_H


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
struct SetEmergencyStopRequest_
{
  typedef SetEmergencyStopRequest_<ContainerAllocator> Type;

  SetEmergencyStopRequest_()
    : componentId()
    , reason()  {
    }
  SetEmergencyStopRequest_(const ContainerAllocator& _alloc)
    : componentId(_alloc)
    , reason(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _componentId_type;
  _componentId_type componentId;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  _reason_type reason;




  typedef boost::shared_ptr< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEmergencyStopRequest_

typedef ::spencer_control_msgs::SetEmergencyStopRequest_<std::allocator<void> > SetEmergencyStopRequest;

typedef boost::shared_ptr< ::spencer_control_msgs::SetEmergencyStopRequest > SetEmergencyStopRequestPtr;
typedef boost::shared_ptr< ::spencer_control_msgs::SetEmergencyStopRequest const> SetEmergencyStopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_control_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/control/spencer_control_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a18f3967663ecb273f4082d93bfe3f2";
  }

  static const char* value(const ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a18f3967663ecb2ULL;
  static const uint64_t static_value2 = 0x73f4082d93bfe3f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_control_msgs/SetEmergencyStopRequest";
  }

  static const char* value(const ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string componentId\n\
string reason\n\
";
  }

  static const char* value(const ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.componentId);
      stream.next(m.reason);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEmergencyStopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_control_msgs::SetEmergencyStopRequest_<ContainerAllocator>& v)
  {
    s << indent << "componentId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.componentId);
    s << indent << "reason: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.reason);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_SETEMERGENCYSTOPREQUEST_H
