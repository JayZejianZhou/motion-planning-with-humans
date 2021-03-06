// Generated by gencpp from file spencer_mapping_msgs/LabelResponse.msg
// DO NOT EDIT!


#ifndef SPENCER_MAPPING_MSGS_MESSAGE_LABELRESPONSE_H
#define SPENCER_MAPPING_MSGS_MESSAGE_LABELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <spencer_mapping_msgs/Label.h>

namespace spencer_mapping_msgs
{
template <class ContainerAllocator>
struct LabelResponse_
{
  typedef LabelResponse_<ContainerAllocator> Type;

  LabelResponse_()
    : label()  {
    }
  LabelResponse_(const ContainerAllocator& _alloc)
    : label(_alloc)  {
  (void)_alloc;
    }



   typedef  ::spencer_mapping_msgs::Label_<ContainerAllocator>  _label_type;
  _label_type label;




  typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LabelResponse_

typedef ::spencer_mapping_msgs::LabelResponse_<std::allocator<void> > LabelResponse;

typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelResponse > LabelResponsePtr;
typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelResponse const> LabelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_mapping_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'spencer_mapping_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/mapping/spencer_mapping_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc13d3ca23d486164418898f6165fe05";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc13d3ca23d48616ULL;
  static const uint64_t static_value2 = 0x4418898f6165fe05ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_mapping_msgs/LabelResponse";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Label label\n\
\n\
\n\
\n\
================================================================================\n\
MSG: spencer_mapping_msgs/Label\n\
# Type and ID of a place in a topologic or metric map\n\
\n\
string type          # \"gate\", \"hall\", \"info screen\", etc\n\
uint32 id            # which gate or info screen is this\n\
uint32[] nodes       # which topological node(s) correspond to this place\n\
float32 orientation  # the angle in which the robot should be facing at this place, or NaN if not applicable\n\
\n\
\n\
##################################\n\
### Constants for place types. ###\n\
##################################\n\
\n\
string      GATE       = \"gate\"\n\
string      SCREEN     = \"info screen\"\n\
string      DESK       = \"info desk\"\n\
string      ROOM       = \"room\"\n\
string      OBS_POINT  = \"observation point\"\n\
";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.label);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_mapping_msgs::LabelResponse_<ContainerAllocator>& v)
  {
    s << indent << "label: ";
    s << std::endl;
    Printer< ::spencer_mapping_msgs::Label_<ContainerAllocator> >::stream(s, indent + "  ", v.label);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_MAPPING_MSGS_MESSAGE_LABELRESPONSE_H
