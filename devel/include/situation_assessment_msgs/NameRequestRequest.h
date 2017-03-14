// Generated by gencpp from file situation_assessment_msgs/NameRequestRequest.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_NAMEREQUESTREQUEST_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_NAMEREQUESTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace situation_assessment_msgs
{
template <class ContainerAllocator>
struct NameRequestRequest_
{
  typedef NameRequestRequest_<ContainerAllocator> Type;

  NameRequestRequest_()
    : name()  {
    }
  NameRequestRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;




  typedef boost::shared_ptr< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NameRequestRequest_

typedef ::situation_assessment_msgs::NameRequestRequest_<std::allocator<void> > NameRequestRequest;

typedef boost::shared_ptr< ::situation_assessment_msgs::NameRequestRequest > NameRequestRequestPtr;
typedef boost::shared_ptr< ::situation_assessment_msgs::NameRequestRequest const> NameRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "situation_assessment_msgs/NameRequestRequest";
  }

  static const char* value(const ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
";
  }

  static const char* value(const ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NameRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::situation_assessment_msgs::NameRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_NAMEREQUESTREQUEST_H
