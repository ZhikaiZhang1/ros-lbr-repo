// Generated by gencpp from file moveit_msgs/AllowedCollisionMatrix.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_ALLOWEDCOLLISIONMATRIX_H
#define MOVEIT_MSGS_MESSAGE_ALLOWEDCOLLISIONMATRIX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/AllowedCollisionEntry.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct AllowedCollisionMatrix_
{
  typedef AllowedCollisionMatrix_<ContainerAllocator> Type;

  AllowedCollisionMatrix_()
    : entry_names()
    , entry_values()
    , default_entry_names()
    , default_entry_values()  {
    }
  AllowedCollisionMatrix_(const ContainerAllocator& _alloc)
    : entry_names(_alloc)
    , entry_values(_alloc)
    , default_entry_names(_alloc)
    , default_entry_values(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _entry_names_type;
  _entry_names_type entry_names;

   typedef std::vector< ::moveit_msgs::AllowedCollisionEntry_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::AllowedCollisionEntry_<ContainerAllocator> >::other >  _entry_values_type;
  _entry_values_type entry_values;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _default_entry_names_type;
  _default_entry_names_type default_entry_names;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _default_entry_values_type;
  _default_entry_values_type default_entry_values;





  typedef boost::shared_ptr< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> const> ConstPtr;

}; // struct AllowedCollisionMatrix_

typedef ::moveit_msgs::AllowedCollisionMatrix_<std::allocator<void> > AllowedCollisionMatrix;

typedef boost::shared_ptr< ::moveit_msgs::AllowedCollisionMatrix > AllowedCollisionMatrixPtr;
typedef boost::shared_ptr< ::moveit_msgs::AllowedCollisionMatrix const> AllowedCollisionMatrixConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/logan/trial_test_ws/devel/.private/moveit_msgs/share/moveit_msgs/msg', '/home/logan/trial_test_ws/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aedce13587eef0d79165a075659c1879";
  }

  static const char* value(const ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaedce13587eef0d7ULL;
  static const uint64_t static_value2 = 0x9165a075659c1879ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/AllowedCollisionMatrix";
  }

  static const char* value(const ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The list of entry names in the matrix\n\
string[] entry_names\n\
\n\
# The individual entries in the allowed collision matrix\n\
# square, symmetric, with same order as entry_names\n\
AllowedCollisionEntry[] entry_values\n\
\n\
# In addition to the collision matrix itself, we also have \n\
# the default entry value for each entry name.\n\
\n\
# If the allowed collision flag is queried for a pair of names (n1, n2)\n\
# that is not found in the collision matrix itself, the value of\n\
# the collision flag is considered to be that of the entry (n1 or n2)\n\
# specified in the list below. If both n1 and n2 are found in the list \n\
# of defaults, the result is computed with an AND operation\n\
\n\
string[] default_entry_names\n\
bool[] default_entry_values\n\
\n\
================================================================================\n\
MSG: moveit_msgs/AllowedCollisionEntry\n\
# whether or not collision checking is enabled\n\
bool[] enabled\n\
";
  }

  static const char* value(const ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.entry_names);
      stream.next(m.entry_values);
      stream.next(m.default_entry_names);
      stream.next(m.default_entry_values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AllowedCollisionMatrix_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::AllowedCollisionMatrix_<ContainerAllocator>& v)
  {
    s << indent << "entry_names[]" << std::endl;
    for (size_t i = 0; i < v.entry_names.size(); ++i)
    {
      s << indent << "  entry_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.entry_names[i]);
    }
    s << indent << "entry_values[]" << std::endl;
    for (size_t i = 0; i < v.entry_values.size(); ++i)
    {
      s << indent << "  entry_values[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::AllowedCollisionEntry_<ContainerAllocator> >::stream(s, indent + "    ", v.entry_values[i]);
    }
    s << indent << "default_entry_names[]" << std::endl;
    for (size_t i = 0; i < v.default_entry_names.size(); ++i)
    {
      s << indent << "  default_entry_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.default_entry_names[i]);
    }
    s << indent << "default_entry_values[]" << std::endl;
    for (size_t i = 0; i < v.default_entry_values.size(); ++i)
    {
      s << indent << "  default_entry_values[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.default_entry_values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_ALLOWEDCOLLISIONMATRIX_H
