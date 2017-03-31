// Generated by gencpp from file spencer_tracking_msgs/TrackedPersons2d.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSONS2D_H
#define SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSONS2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_tracking_msgs/TrackedPerson2d.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct TrackedPersons2d_
{
  typedef TrackedPersons2d_<ContainerAllocator> Type;

  TrackedPersons2d_()
    : header()
    , boxes()  {
    }
  TrackedPersons2d_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , boxes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >::other >  _boxes_type;
  _boxes_type boxes;




  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedPersons2d_

typedef ::spencer_tracking_msgs::TrackedPersons2d_<std::allocator<void> > TrackedPersons2d;

typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPersons2d > TrackedPersons2dPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPersons2d const> TrackedPersons2dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/perception/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "972b7d693ce31c3b18f092f43387621c";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x972b7d693ce31c3bULL;
  static const uint64_t static_value2 = 0x18f092f43387621cULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/TrackedPersons2d";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with all 2d bbox in image of currently tracked persons \n\
#\n\
\n\
Header                header      # Header containing timestamp etc. of this message\n\
TrackedPerson2d[]     boxes       # All persons that are currently being tracked (2d image bbox)\n\
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
MSG: spencer_tracking_msgs/TrackedPerson2d\n\
# Message defining a 2d image bbox of a tracked person\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
float32     person_height   # 3d height of person in m\n\
int32       x               # top left corner x of 2d image bbox\n\
int32       y               # top left corner y of 2d image bbox\n\
uint32      w               # width of 2d image bbox\n\
uint32      h               # height of 2d image bbox\n\
float32     depth           # distance from the camera in m\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.boxes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedPersons2d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::TrackedPersons2d_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "boxes[]" << std::endl;
    for (size_t i = 0; i < v.boxes.size(); ++i)
    {
      s << indent << "  boxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >::stream(s, indent + "    ", v.boxes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSONS2D_H
