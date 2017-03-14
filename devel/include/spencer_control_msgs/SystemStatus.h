// Generated by gencpp from file spencer_control_msgs/SystemStatus.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_SYSTEMSTATUS_H
#define SPENCER_CONTROL_MSGS_MESSAGE_SYSTEMSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace spencer_control_msgs
{
template <class ContainerAllocator>
struct SystemStatus_
{
  typedef SystemStatus_<ContainerAllocator> Type;

  SystemStatus_()
    : header()
    , software_emergency_stop(false)
    , hardware_emergency_stop(false)
    , quick_stop(false)
    , wheel_encoder_left_ticks(0.0)
    , wheel_encoder_right_ticks(0.0)  {
    }
  SystemStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , software_emergency_stop(false)
    , hardware_emergency_stop(false)
    , quick_stop(false)
    , wheel_encoder_left_ticks(0.0)
    , wheel_encoder_right_ticks(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _software_emergency_stop_type;
  _software_emergency_stop_type software_emergency_stop;

   typedef uint8_t _hardware_emergency_stop_type;
  _hardware_emergency_stop_type hardware_emergency_stop;

   typedef uint8_t _quick_stop_type;
  _quick_stop_type quick_stop;

   typedef double _wheel_encoder_left_ticks_type;
  _wheel_encoder_left_ticks_type wheel_encoder_left_ticks;

   typedef double _wheel_encoder_right_ticks_type;
  _wheel_encoder_right_ticks_type wheel_encoder_right_ticks;




  typedef boost::shared_ptr< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SystemStatus_

typedef ::spencer_control_msgs::SystemStatus_<std::allocator<void> > SystemStatus;

typedef boost::shared_ptr< ::spencer_control_msgs::SystemStatus > SystemStatusPtr;
typedef boost::shared_ptr< ::spencer_control_msgs::SystemStatus const> SystemStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_control_msgs::SystemStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_control_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/control/spencer_control_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f87947cd4c1622efddd24842cc92be75";
  }

  static const char* value(const ::spencer_control_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf87947cd4c1622efULL;
  static const uint64_t static_value2 = 0xddd24842cc92be75ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_control_msgs/SystemStatus";
  }

  static const char* value(const ::spencer_control_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
bool software_emergency_stop    # True if software emergency stop has been activated; usually causes quick-stop relay to be triggered.\n\
bool hardware_emergency_stop    # True if hardware emergency stop is pressed, rear cover is open or bumper is pressed. Does NOT include quick-stop relay.\n\
bool quick_stop                 # True if the quick-stop relay has been triggered by collision avoidance or software emergency stop.\n\
\n\
float64 wheel_encoder_left_ticks\n\
float64 wheel_encoder_right_ticks\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::spencer_control_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.software_emergency_stop);
      stream.next(m.hardware_emergency_stop);
      stream.next(m.quick_stop);
      stream.next(m.wheel_encoder_left_ticks);
      stream.next(m.wheel_encoder_right_ticks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SystemStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_control_msgs::SystemStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_control_msgs::SystemStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "software_emergency_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.software_emergency_stop);
    s << indent << "hardware_emergency_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hardware_emergency_stop);
    s << indent << "quick_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quick_stop);
    s << indent << "wheel_encoder_left_ticks: ";
    Printer<double>::stream(s, indent + "  ", v.wheel_encoder_left_ticks);
    s << indent << "wheel_encoder_right_ticks: ";
    Printer<double>::stream(s, indent + "  ", v.wheel_encoder_right_ticks);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_SYSTEMSTATUS_H
