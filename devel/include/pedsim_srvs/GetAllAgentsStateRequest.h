// Generated by gencpp from file pedsim_srvs/GetAllAgentsStateRequest.msg
// DO NOT EDIT!


#ifndef PEDSIM_SRVS_MESSAGE_GETALLAGENTSSTATEREQUEST_H
#define PEDSIM_SRVS_MESSAGE_GETALLAGENTSSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pedsim_srvs
{
template <class ContainerAllocator>
struct GetAllAgentsStateRequest_
{
  typedef GetAllAgentsStateRequest_<ContainerAllocator> Type;

  GetAllAgentsStateRequest_()
    : agent_ids()  {
    }
  GetAllAgentsStateRequest_(const ContainerAllocator& _alloc)
    : agent_ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _agent_ids_type;
  _agent_ids_type agent_ids;




  typedef boost::shared_ptr< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetAllAgentsStateRequest_

typedef ::pedsim_srvs::GetAllAgentsStateRequest_<std::allocator<void> > GetAllAgentsStateRequest;

typedef boost::shared_ptr< ::pedsim_srvs::GetAllAgentsStateRequest > GetAllAgentsStateRequestPtr;
typedef boost::shared_ptr< ::pedsim_srvs::GetAllAgentsStateRequest const> GetAllAgentsStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pedsim_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'pedsim_msgs': ['/home/zejian/catkin_ws/src/pedsim_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6ae2c87e95de54a27053702cd22ee2c9";
  }

  static const char* value(const ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6ae2c87e95de54a2ULL;
  static const uint64_t static_value2 = 0x7053702cd22ee2c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_srvs/GetAllAgentsStateRequest";
  }

  static const char* value(const ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16[] agent_ids\n\
";
  }

  static const char* value(const ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.agent_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAllAgentsStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_srvs::GetAllAgentsStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "agent_ids[]" << std::endl;
    for (size_t i = 0; i < v.agent_ids.size(); ++i)
    {
      s << indent << "  agent_ids[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.agent_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_SRVS_MESSAGE_GETALLAGENTSSTATEREQUEST_H
