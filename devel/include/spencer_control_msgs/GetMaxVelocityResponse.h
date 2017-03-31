// Generated by gencpp from file spencer_control_msgs/GetMaxVelocityResponse.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYRESPONSE_H
#define SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYRESPONSE_H


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
struct GetMaxVelocityResponse_
{
  typedef GetMaxVelocityResponse_<ContainerAllocator> Type;

  GetMaxVelocityResponse_()
    : max_linear_velocity(0.0)
    , max_angular_velocity(0.0)  {
    }
  GetMaxVelocityResponse_(const ContainerAllocator& _alloc)
    : max_linear_velocity(0.0)
    , max_angular_velocity(0.0)  {
  (void)_alloc;
    }



   typedef double _max_linear_velocity_type;
  _max_linear_velocity_type max_linear_velocity;

   typedef double _max_angular_velocity_type;
  _max_angular_velocity_type max_angular_velocity;




  typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMaxVelocityResponse_

typedef ::spencer_control_msgs::GetMaxVelocityResponse_<std::allocator<void> > GetMaxVelocityResponse;

typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityResponse > GetMaxVelocityResponsePtr;
typedef boost::shared_ptr< ::spencer_control_msgs::GetMaxVelocityResponse const> GetMaxVelocityResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_control_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/control/spencer_control_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c3d002ed0ab158592aaa625149bc3810";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc3d002ed0ab15859ULL;
  static const uint64_t static_value2 = 0x2aaa625149bc3810ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_control_msgs/GetMaxVelocityResponse";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 max_linear_velocity\n\
float64 max_angular_velocity\n\
\n\
";
  }

  static const char* value(const ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.max_linear_velocity);
      stream.next(m.max_angular_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMaxVelocityResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_control_msgs::GetMaxVelocityResponse_<ContainerAllocator>& v)
  {
    s << indent << "max_linear_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_linear_velocity);
    s << indent << "max_angular_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_angular_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_GETMAXVELOCITYRESPONSE_H
