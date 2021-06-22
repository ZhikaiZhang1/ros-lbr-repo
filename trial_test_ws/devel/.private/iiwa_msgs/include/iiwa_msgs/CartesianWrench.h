// Generated by gencpp from file iiwa_msgs/CartesianWrench.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_CARTESIANWRENCH_H
#define IIWA_MSGS_MESSAGE_CARTESIANWRENCH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/Wrench.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct CartesianWrench_
{
  typedef CartesianWrench_<ContainerAllocator> Type;

  CartesianWrench_()
    : header()
    , wrench()
    , inaccuracy()  {
    }
  CartesianWrench_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , wrench(_alloc)
    , inaccuracy(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _inaccuracy_type;
  _inaccuracy_type inaccuracy;





  typedef boost::shared_ptr< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianWrench_

typedef ::iiwa_msgs::CartesianWrench_<std::allocator<void> > CartesianWrench;

typedef boost::shared_ptr< ::iiwa_msgs::CartesianWrench > CartesianWrenchPtr;
typedef boost::shared_ptr< ::iiwa_msgs::CartesianWrench const> CartesianWrenchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::CartesianWrench_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b710d3269f35c0e4079ef3ef88f25c6c";
  }

  static const char* value(const ::iiwa_msgs::CartesianWrench_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb710d3269f35c0e4ULL;
  static const uint64_t static_value2 = 0x079ef3ef88f25c6cULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/CartesianWrench";
  }

  static const char* value(const ::iiwa_msgs::CartesianWrench_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Cartesian Wrench\n\
Header header\n\
geometry_msgs/Wrench wrench\n\
geometry_msgs/Wrench inaccuracy\n\
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
MSG: geometry_msgs/Wrench\n\
# This represents force in free space, separated into\n\
# its linear and angular parts.\n\
Vector3  force\n\
Vector3  torque\n\
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

  static const char* value(const ::iiwa_msgs::CartesianWrench_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.wrench);
      stream.next(m.inaccuracy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianWrench_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::CartesianWrench_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::CartesianWrench_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
    s << indent << "inaccuracy: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.inaccuracy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_CARTESIANWRENCH_H
