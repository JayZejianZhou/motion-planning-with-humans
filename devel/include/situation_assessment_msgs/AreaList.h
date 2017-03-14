// Generated by gencpp from file situation_assessment_msgs/AreaList.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_AREALIST_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_AREALIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Polygon.h>

namespace situation_assessment_msgs
{
template <class ContainerAllocator>
struct AreaList_
{
  typedef AreaList_<ContainerAllocator> Type;

  AreaList_()
    : header()
    , areas()  {
    }
  AreaList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , areas(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Polygon_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Polygon_<ContainerAllocator> >::other >  _areas_type;
  _areas_type areas;




  typedef boost::shared_ptr< ::situation_assessment_msgs::AreaList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::situation_assessment_msgs::AreaList_<ContainerAllocator> const> ConstPtr;

}; // struct AreaList_

typedef ::situation_assessment_msgs::AreaList_<std::allocator<void> > AreaList;

typedef boost::shared_ptr< ::situation_assessment_msgs::AreaList > AreaListPtr;
typedef boost::shared_ptr< ::situation_assessment_msgs::AreaList const> AreaListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::situation_assessment_msgs::AreaList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace situation_assessment_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'situation_assessment_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/supervision/situation_assessment_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::AreaList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::AreaList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::AreaList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4407eae5fe36cd66e57e53e24a58628";
  }

  static const char* value(const ::situation_assessment_msgs::AreaList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4407eae5fe36cd6ULL;
  static const uint64_t static_value2 = 0x6e57e53e24a58628ULL;
};

template<class ContainerAllocator>
struct DataType< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/AreaList";
  }

  static const char* value(const ::situation_assessment_msgs::AreaList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
geometry_msgs/Polygon[] areas\n\
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
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::situation_assessment_msgs::AreaList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.areas);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AreaList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::situation_assessment_msgs::AreaList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::situation_assessment_msgs::AreaList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "areas[]" << std::endl;
    for (size_t i = 0; i < v.areas.size(); ++i)
    {
      s << indent << "  areas[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "    ", v.areas[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_AREALIST_H
