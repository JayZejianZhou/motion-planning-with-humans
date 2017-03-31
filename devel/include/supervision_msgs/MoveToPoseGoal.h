// Generated by gencpp from file supervision_msgs/MoveToPoseGoal.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_MOVETOPOSEGOAL_H
#define SUPERVISION_MSGS_MESSAGE_MOVETOPOSEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace supervision_msgs
{
template <class ContainerAllocator>
struct MoveToPoseGoal_
{
  typedef MoveToPoseGoal_<ContainerAllocator> Type;

  MoveToPoseGoal_()
    : poses()  {
    }
  MoveToPoseGoal_(const ContainerAllocator& _alloc)
    : poses(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;




  typedef boost::shared_ptr< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToPoseGoal_

typedef ::supervision_msgs::MoveToPoseGoal_<std::allocator<void> > MoveToPoseGoal;

typedef boost::shared_ptr< ::supervision_msgs::MoveToPoseGoal > MoveToPoseGoalPtr;
typedef boost::shared_ptr< ::supervision_msgs::MoveToPoseGoal const> MoveToPoseGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace supervision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'supervision_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/supervision/supervision_msgs/msg', '/home/zejian/catkin_ws/devel/share/supervision_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db8ce58a1deaf0d1f2e7fdd257963e81";
  }

  static const char* value(const ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb8ce58a1deaf0d1ULL;
  static const uint64_t static_value2 = 0xf2e7fdd257963e81ULL;
};

template<class ContainerAllocator>
struct DataType< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervision_msgs/MoveToPoseGoal";
  }

  static const char* value(const ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
geometry_msgs/Pose[] poses\n\
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
";
  }

  static const char* value(const ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToPoseGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supervision_msgs::MoveToPoseGoal_<ContainerAllocator>& v)
  {
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_MOVETOPOSEGOAL_H
