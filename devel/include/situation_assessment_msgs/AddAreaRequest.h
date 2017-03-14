// Generated by gencpp from file situation_assessment_msgs/AddAreaRequest.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_ADDAREAREQUEST_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_ADDAREAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Polygon.h>

namespace situation_assessment_msgs
{
template <class ContainerAllocator>
struct AddAreaRequest_
{
  typedef AddAreaRequest_<ContainerAllocator> Type;

  AddAreaRequest_()
    : name()
    , area()
    , linked_to_entity()  {
    }
  AddAreaRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , area(_alloc)
    , linked_to_entity(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _area_type;
  _area_type area;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _linked_to_entity_type;
  _linked_to_entity_type linked_to_entity;




  typedef boost::shared_ptr< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddAreaRequest_

typedef ::situation_assessment_msgs::AddAreaRequest_<std::allocator<void> > AddAreaRequest;

typedef boost::shared_ptr< ::situation_assessment_msgs::AddAreaRequest > AddAreaRequestPtr;
typedef boost::shared_ptr< ::situation_assessment_msgs::AddAreaRequest const> AddAreaRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace situation_assessment_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'situation_assessment_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/supervision/situation_assessment_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f7b3551244e72e80f5c0b5987020512";
  }

  static const char* value(const ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f7b3551244e72e8ULL;
  static const uint64_t static_value2 = 0x0f5c0b5987020512ULL;
};

template<class ContainerAllocator>
struct DataType< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/AddAreaRequest";
  }

  static const char* value(const ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
geometry_msgs/Polygon area\n\
string linked_to_entity\n\
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

  static const char* value(const ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.area);
      stream.next(m.linked_to_entity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddAreaRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::situation_assessment_msgs::AddAreaRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "area: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.area);
    s << indent << "linked_to_entity: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.linked_to_entity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_ADDAREAREQUEST_H
