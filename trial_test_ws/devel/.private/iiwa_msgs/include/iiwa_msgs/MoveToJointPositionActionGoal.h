// Generated by gencpp from file iiwa_msgs/MoveToJointPositionActionGoal.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_MOVETOJOINTPOSITIONACTIONGOAL_H
#define IIWA_MSGS_MESSAGE_MOVETOJOINTPOSITIONACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <iiwa_msgs/MoveToJointPositionGoal.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct MoveToJointPositionActionGoal_
{
  typedef MoveToJointPositionActionGoal_<ContainerAllocator> Type;

  MoveToJointPositionActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  MoveToJointPositionActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::iiwa_msgs::MoveToJointPositionGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToJointPositionActionGoal_

typedef ::iiwa_msgs::MoveToJointPositionActionGoal_<std::allocator<void> > MoveToJointPositionActionGoal;

typedef boost::shared_ptr< ::iiwa_msgs::MoveToJointPositionActionGoal > MoveToJointPositionActionGoalPtr;
typedef boost::shared_ptr< ::iiwa_msgs::MoveToJointPositionActionGoal const> MoveToJointPositionActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22733026b95f92bce41302102c042790";
  }

  static const char* value(const ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22733026b95f92bcULL;
  static const uint64_t static_value2 = 0xe41302102c042790ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/MoveToJointPositionActionGoal";
  }

  static const char* value(const ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
MoveToJointPositionGoal goal\n\
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
MSG: iiwa_msgs/MoveToJointPositionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal\n\
iiwa_msgs/JointPosition joint_position\n\
\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/JointPosition\n\
Header header\n\
JointQuantity position\n\
================================================================================\n\
MSG: iiwa_msgs/JointQuantity\n\
float32 a1\n\
float32 a2\n\
float32 a3\n\
float32 a4\n\
float32 a5\n\
float32 a6\n\
float32 a7\n\
";
  }

  static const char* value(const ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToJointPositionActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::MoveToJointPositionActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveToJointPositionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_MOVETOJOINTPOSITIONACTIONGOAL_H
