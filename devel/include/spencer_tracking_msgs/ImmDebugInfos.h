// Generated by gencpp from file spencer_tracking_msgs/ImmDebugInfos.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFOS_H
#define SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFOS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_tracking_msgs/ImmDebugInfo.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct ImmDebugInfos_
{
  typedef ImmDebugInfos_<ContainerAllocator> Type;

  ImmDebugInfos_()
    : header()
    , infos()  {
    }
  ImmDebugInfos_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , infos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >::other >  _infos_type;
  _infos_type infos;




  typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> const> ConstPtr;

}; // struct ImmDebugInfos_

typedef ::spencer_tracking_msgs::ImmDebugInfos_<std::allocator<void> > ImmDebugInfos;

typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfos > ImmDebugInfosPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfos const> ImmDebugInfosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce7fa675b582455db7386ac3eaa36b5b";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce7fa675b582455dULL;
  static const uint64_t static_value2 = 0xb7386ac3eaa36b5bULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/ImmDebugInfos";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with all debug infos per frame\n\
#\n\
\n\
Header              header      # Header containing timestamp etc. of this message\n\
ImmDebugInfo[]      infos      # All persons that are currently being tracked\n\
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
\n\
================================================================================\n\
MSG: spencer_tracking_msgs/ImmDebugInfo\n\
# Message for passing debug information of filter performance\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
float64      innovation      # innovation of prediction and associated observation\n\
float64      CpXX            # variance of prediction acc. to x\n\
float64      CpYY            # variance of prediction acc. to y\n\
float64      CXX             # variance of state acc. to x\n\
float64      CYY             # variance of state acc. to y\n\
float64[]    modeProbabilities# array containing mode probabilities\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.infos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImmDebugInfos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::ImmDebugInfos_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "infos[]" << std::endl;
    for (size_t i = 0; i < v.infos.size(); ++i)
    {
      s << indent << "  infos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.infos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFOS_H
