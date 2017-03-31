// Generated by gencpp from file supervision_msgs/GuideGroupAction.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_GUIDEGROUPACTION_H
#define SUPERVISION_MSGS_MESSAGE_GUIDEGROUPACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <supervision_msgs/GuideGroupActionGoal.h>
#include <supervision_msgs/GuideGroupActionResult.h>
#include <supervision_msgs/GuideGroupActionFeedback.h>

namespace supervision_msgs
{
template <class ContainerAllocator>
struct GuideGroupAction_
{
  typedef GuideGroupAction_<ContainerAllocator> Type;

  GuideGroupAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  GuideGroupAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::supervision_msgs::GuideGroupActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::supervision_msgs::GuideGroupActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::supervision_msgs::GuideGroupActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> const> ConstPtr;

}; // struct GuideGroupAction_

typedef ::supervision_msgs::GuideGroupAction_<std::allocator<void> > GuideGroupAction;

typedef boost::shared_ptr< ::supervision_msgs::GuideGroupAction > GuideGroupActionPtr;
typedef boost::shared_ptr< ::supervision_msgs::GuideGroupAction const> GuideGroupActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervision_msgs::GuideGroupAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "430dfc6e7eb2a07e758bb2f2a795a87f";
  }

  static const char* value(const ::supervision_msgs::GuideGroupAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x430dfc6e7eb2a07eULL;
  static const uint64_t static_value2 = 0x758bb2f2a795a87fULL;
};

template<class ContainerAllocator>
struct DataType< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervision_msgs/GuideGroupAction";
  }

  static const char* value(const ::supervision_msgs::GuideGroupAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
GuideGroupActionGoal action_goal\n\
GuideGroupActionResult action_result\n\
GuideGroupActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: supervision_msgs/GuideGroupActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
GuideGroupGoal goal\n\
\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: supervision_msgs/GuideGroupGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
string group_id\n\
string destination\n\
string[] path\n\
geometry_msgs/Pose[] coordinates\n\
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
MSG: supervision_msgs/GuideGroupActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GuideGroupResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: supervision_msgs/GuideGroupResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
string status\n\
string details\n\
\n\
================================================================================\n\
MSG: supervision_msgs/GuideGroupActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GuideGroupFeedback feedback\n\
\n\
================================================================================\n\
MSG: supervision_msgs/GuideGroupFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
string current_node\n\
string status\n\
string details\n\
";
  }

  static const char* value(const ::supervision_msgs::GuideGroupAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GuideGroupAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervision_msgs::GuideGroupAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supervision_msgs::GuideGroupAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::supervision_msgs::GuideGroupActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::supervision_msgs::GuideGroupActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::supervision_msgs::GuideGroupActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_GUIDEGROUPACTION_H
