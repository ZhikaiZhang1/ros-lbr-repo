// Generated by gencpp from file iiwa_msgs/CartesianEulerPose.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_CARTESIANEULERPOSE_H
#define IIWA_MSGS_MESSAGE_CARTESIANEULERPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <iiwa_msgs/CartesianQuantity.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct CartesianEulerPose_
{
  typedef CartesianEulerPose_<ContainerAllocator> Type;

  CartesianEulerPose_()
    : header()
    , pose()  {
    }
  CartesianEulerPose_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::iiwa_msgs::CartesianQuantity_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianEulerPose_

typedef ::iiwa_msgs::CartesianEulerPose_<std::allocator<void> > CartesianEulerPose;

typedef boost::shared_ptr< ::iiwa_msgs::CartesianEulerPose > CartesianEulerPosePtr;
typedef boost::shared_ptr< ::iiwa_msgs::CartesianEulerPose const> CartesianEulerPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iiwa_msgs': ['/home/logan/trial_test_ws/src/iiwa_stack/iiwa_msgs/msg', '/home/logan/trial_test_ws/devel/.private/iiwa_msgs/share/iiwa_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "007ae8f5dcbe93f7ab42a1d24885796d";
  }

  static const char* value(const ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x007ae8f5dcbe93f7ULL;
  static const uint64_t static_value2 = 0xab42a1d24885796dULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/CartesianEulerPose";
  }

  static const char* value(const ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
CartesianQuantity pose\n\
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
MSG: iiwa_msgs/CartesianQuantity\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 a\n\
float32 b\n\
float32 c\n\
";
  }

  static const char* value(const ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianEulerPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::CartesianEulerPose_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::iiwa_msgs::CartesianQuantity_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_CARTESIANEULERPOSE_H
