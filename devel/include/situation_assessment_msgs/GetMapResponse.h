// Generated by gencpp from file situation_assessment_msgs/GetMapResponse.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_GETMAPRESPONSE_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_GETMAPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <situation_assessment_msgs/Graph.h>

namespace situation_assessment_msgs
{
template <class ContainerAllocator>
struct GetMapResponse_
{
  typedef GetMapResponse_<ContainerAllocator> Type;

  GetMapResponse_()
    : graph()  {
    }
  GetMapResponse_(const ContainerAllocator& _alloc)
    : graph(_alloc)  {
  (void)_alloc;
    }



   typedef  ::situation_assessment_msgs::Graph_<ContainerAllocator>  _graph_type;
  _graph_type graph;




  typedef boost::shared_ptr< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapResponse_

typedef ::situation_assessment_msgs::GetMapResponse_<std::allocator<void> > GetMapResponse;

typedef boost::shared_ptr< ::situation_assessment_msgs::GetMapResponse > GetMapResponsePtr;
typedef boost::shared_ptr< ::situation_assessment_msgs::GetMapResponse const> GetMapResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace situation_assessment_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'situation_assessment_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/supervision/situation_assessment_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aba73a71fb147c0d5f22018d68df9d81";
  }

  static const char* value(const ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaba73a71fb147c0dULL;
  static const uint64_t static_value2 = 0x5f22018d68df9d81ULL;
};

template<class ContainerAllocator>
struct DataType< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/GetMapResponse";
  }

  static const char* value(const ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/Graph graph\n\
\n\
\n\
\n\
================================================================================\n\
MSG: situation_assessment_msgs/Graph\n\
situation_assessment_msgs/Node[] nodes\n\
situation_assessment_msgs/Edge[] edges\n\
\n\
================================================================================\n\
MSG: situation_assessment_msgs/Node\n\
string label\n\
situation_assessment_msgs/Property[] properties\n\
geometry_msgs/Point center\n\
geometry_msgs/Point[] vertexs\n\
\n\
\n\
================================================================================\n\
MSG: situation_assessment_msgs/Property\n\
string name\n\
int16 value\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: situation_assessment_msgs/Edge\n\
string source\n\
string destination\n\
situation_assessment_msgs/Property[] properties\n\
";
  }

  static const char* value(const ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.graph);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::situation_assessment_msgs::GetMapResponse_<ContainerAllocator>& v)
  {
    s << indent << "graph: ";
    s << std::endl;
    Printer< ::situation_assessment_msgs::Graph_<ContainerAllocator> >::stream(s, indent + "  ", v.graph);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_GETMAPRESPONSE_H
