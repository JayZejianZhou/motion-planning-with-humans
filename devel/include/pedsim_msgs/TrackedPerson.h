// Generated by gencpp from file pedsim_msgs/TrackedPerson.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_TRACKEDPERSON_H
#define PEDSIM_MSGS_MESSAGE_TRACKEDPERSON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/TwistWithCovariance.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct TrackedPerson_
{
  typedef TrackedPerson_<ContainerAllocator> Type;

  TrackedPerson_()
    : track_id(0)
    , is_occluded(false)
    , is_matched(false)
    , detection_id(0)
    , age()
    , pose()
    , twist()  {
    }
  TrackedPerson_(const ContainerAllocator& _alloc)
    : track_id(0)
    , is_occluded(false)
    , is_matched(false)
    , detection_id(0)
    , age()
    , pose(_alloc)
    , twist(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _track_id_type;
  _track_id_type track_id;

   typedef uint8_t _is_occluded_type;
  _is_occluded_type is_occluded;

   typedef uint8_t _is_matched_type;
  _is_matched_type is_matched;

   typedef uint64_t _detection_id_type;
  _detection_id_type detection_id;

   typedef ros::Duration _age_type;
  _age_type age;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator>  _twist_type;
  _twist_type twist;




  typedef boost::shared_ptr< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedPerson_

typedef ::pedsim_msgs::TrackedPerson_<std::allocator<void> > TrackedPerson;

typedef boost::shared_ptr< ::pedsim_msgs::TrackedPerson > TrackedPersonPtr;
typedef boost::shared_ptr< ::pedsim_msgs::TrackedPerson const> TrackedPersonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::TrackedPerson_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'pedsim_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/pedsim_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28bdd0d6d6551c668e4fde8aecdf1885";
  }

  static const char* value(const ::pedsim_msgs::TrackedPerson_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28bdd0d6d6551c66ULL;
  static const uint64_t static_value2 = 0x8e4fde8aecdf1885ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/TrackedPerson";
  }

  static const char* value(const ::pedsim_msgs::TrackedPerson_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message defining a tracked person\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
bool        is_occluded     # if the track is currently not observable in a physical way\n\
bool        is_matched      # if the track is currently matched by a detection\n\
uint64      detection_id    # id of the corresponding detection in the current cycle (undefined if occluded)\n\
duration    age             # age of the track\n\
\n\
# The following fields are extracted from the Kalman state x and its covariance C\n\
\n\
geometry_msgs/PoseWithCovariance       pose   # pose of the track (z value and orientation might not be set, check if corresponding variance on diagonal is > 99999)\n\
\n\
geometry_msgs/TwistWithCovariance   twist     # velocity of the track (z value and rotational velocities might not be set, check if corresponding variance on diagonal is > 99999)\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistWithCovariance\n\
# This expresses velocity in free space with uncertainty.\n\
\n\
Twist twist\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::pedsim_msgs::TrackedPerson_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.track_id);
      stream.next(m.is_occluded);
      stream.next(m.is_matched);
      stream.next(m.detection_id);
      stream.next(m.age);
      stream.next(m.pose);
      stream.next(m.twist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedPerson_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::TrackedPerson_<ContainerAllocator>& v)
  {
    s << indent << "track_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.track_id);
    s << indent << "is_occluded: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_occluded);
    s << indent << "is_matched: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_matched);
    s << indent << "detection_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.detection_id);
    s << indent << "age: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.age);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_TRACKEDPERSON_H
