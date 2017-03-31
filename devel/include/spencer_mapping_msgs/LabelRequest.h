// Generated by gencpp from file spencer_mapping_msgs/LabelRequest.msg
// DO NOT EDIT!


#ifndef SPENCER_MAPPING_MSGS_MESSAGE_LABELREQUEST_H
#define SPENCER_MAPPING_MSGS_MESSAGE_LABELREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_mapping_msgs
{
template <class ContainerAllocator>
struct LabelRequest_
{
  typedef LabelRequest_<ContainerAllocator> Type;

  LabelRequest_()
    : type()
    , id(0)  {
    }
  LabelRequest_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , id(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef uint32_t _id_type;
  _id_type id;




  typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LabelRequest_

typedef ::spencer_mapping_msgs::LabelRequest_<std::allocator<void> > LabelRequest;

typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelRequest > LabelRequestPtr;
typedef boost::shared_ptr< ::spencer_mapping_msgs::LabelRequest const> LabelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29fed24be174e177b23eb99b39237320";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29fed24be174e177ULL;
  static const uint64_t static_value2 = 0xb23eb99b39237320ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_mapping_msgs/LabelRequest";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
string type\n\
uint32 id\n\
";
  }

  static const char* value(const ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_mapping_msgs::LabelRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_MAPPING_MSGS_MESSAGE_LABELREQUEST_H
