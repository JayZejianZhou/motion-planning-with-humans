// Generated by gencpp from file situation_assessment_msgs/GetLocationsResponse.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_GETLOCATIONSRESPONSE_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_GETLOCATIONSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Polygon.h>

namespace situation_assessment_msgs
{
template <class ContainerAllocator>
struct GetLocationsResponse_
{
  typedef GetLocationsResponse_<ContainerAllocator> Type;

  GetLocationsResponse_()
    : locations()
    , centers()
    , areas()  {
    }
  GetLocationsResponse_(const ContainerAllocator& _alloc)
    : locations(_alloc)
    , centers(_alloc)
    , areas(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _locations_type;
  _locations_type locations;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _centers_type;
  _centers_type centers;

   typedef std::vector< ::geometry_msgs::Polygon_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Polygon_<ContainerAllocator> >::other >  _areas_type;
  _areas_type areas;




  typedef boost::shared_ptr< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLocationsResponse_

typedef ::situation_assessment_msgs::GetLocationsResponse_<std::allocator<void> > GetLocationsResponse;

typedef boost::shared_ptr< ::situation_assessment_msgs::GetLocationsResponse > GetLocationsResponsePtr;
typedef boost::shared_ptr< ::situation_assessment_msgs::GetLocationsResponse const> GetLocationsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "72e6ff3d010f612aaa8e999e6156cd37";
  }

  static const char* value(const ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x72e6ff3d010f612aULL;
  static const uint64_t static_value2 = 0xaa8e999e6156cd37ULL;
};

template<class ContainerAllocator>
struct DataType< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/GetLocationsResponse";
  }

  static const char* value(const ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] locations\n\
geometry_msgs/Point[] centers\n\
geometry_msgs/Polygon[] areas\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
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

  static const char* value(const ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.locations);
      stream.next(m.centers);
      stream.next(m.areas);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLocationsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::situation_assessment_msgs::GetLocationsResponse_<ContainerAllocator>& v)
  {
    s << indent << "locations[]" << std::endl;
    for (size_t i = 0; i < v.locations.size(); ++i)
    {
      s << indent << "  locations[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.locations[i]);
    }
    s << indent << "centers[]" << std::endl;
    for (size_t i = 0; i < v.centers.size(); ++i)
    {
      s << indent << "  centers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.centers[i]);
    }
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

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_GETLOCATIONSRESPONSE_H
