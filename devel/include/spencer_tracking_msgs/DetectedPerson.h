// Generated by gencpp from file spencer_tracking_msgs/DetectedPerson.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSON_H
#define SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovariance.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct DetectedPerson_
{
  typedef DetectedPerson_<ContainerAllocator> Type;

  DetectedPerson_()
    : detection_id(0)
    , confidence(0.0)
    , pose()
    , modality()  {
    }
  DetectedPerson_(const ContainerAllocator& _alloc)
    : detection_id(0)
    , confidence(0.0)
    , pose(_alloc)
    , modality(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _detection_id_type;
  _detection_id_type detection_id;

   typedef double _confidence_type;
  _confidence_type confidence;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _modality_type;
  _modality_type modality;


    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODALITY_GENERIC_LASER_2D;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODALITY_GENERIC_LASER_3D;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODALITY_GENERIC_MONOCULAR_VISION;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODALITY_GENERIC_STEREO_VISION;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODALITY_GENERIC_RGBD;
 

  typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedPerson_

typedef ::spencer_tracking_msgs::DetectedPerson_<std::allocator<void> > DetectedPerson;

typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPerson > DetectedPersonPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::DetectedPerson const> DetectedPersonConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      DetectedPerson_<ContainerAllocator>::MODALITY_GENERIC_LASER_2D =
        
          "laser2d"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      DetectedPerson_<ContainerAllocator>::MODALITY_GENERIC_LASER_3D =
        
          "laser3d"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      DetectedPerson_<ContainerAllocator>::MODALITY_GENERIC_MONOCULAR_VISION =
        
          "mono"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      DetectedPerson_<ContainerAllocator>::MODALITY_GENERIC_STEREO_VISION =
        
          "stereo"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      DetectedPerson_<ContainerAllocator>::MODALITY_GENERIC_RGBD =
        
          "rgbd"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/zejian/catkin_ws/src/visualization/spencer_messages/perception/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62855d424a3d5f142c0e8f5f63be52fe";
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62855d424a3d5f14ULL;
  static const uint64_t static_value2 = 0x2c0e8f5f63be52feULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/DetectedPerson";
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message describing a detection of a person\n\
#\n\
\n\
# Unique id of the detection, monotonically increasing over time\n\
uint64          detection_id\n\
\n\
# (Pseudo-)probabilistic value between 0.0 and 1.0 describing the detector's confidence in the detection\n\
float64         confidence\n\
\n\
# 3D pose (position + orientation) of the *center* of the detection\n\
# check covariance to see which dimensions are actually set! unset dimensions shall have a covariance > 9999\n\
geometry_msgs/PoseWithCovariance    pose    \n\
\n\
# Sensor modality / detector type, see example constants below. \n\
# used e.g. later in tracking to check which tracks have been visually confirmed\n\
string          modality            \n\
\n\
                                    \n\
string          MODALITY_GENERIC_LASER_2D = laser2d\n\
string          MODALITY_GENERIC_LASER_3D = laser3d\n\
string          MODALITY_GENERIC_MONOCULAR_VISION = mono\n\
string          MODALITY_GENERIC_STEREO_VISION = stereo\n\
string          MODALITY_GENERIC_RGBD = rgbd\n\
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
";
  }

  static const char* value(const ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detection_id);
      stream.next(m.confidence);
      stream.next(m.pose);
      stream.next(m.modality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedPerson_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::DetectedPerson_<ContainerAllocator>& v)
  {
    s << indent << "detection_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.detection_id);
    s << indent << "confidence: ";
    Printer<double>::stream(s, indent + "  ", v.confidence);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "modality: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.modality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_DETECTEDPERSON_H
