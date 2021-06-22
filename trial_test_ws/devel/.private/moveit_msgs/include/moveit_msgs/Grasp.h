// Generated by gencpp from file moveit_msgs/Grasp.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GRASP_H
#define MOVEIT_MSGS_MESSAGE_GRASP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <geometry_msgs/PoseStamped.h>
#include <moveit_msgs/GripperTranslation.h>
#include <moveit_msgs/GripperTranslation.h>
#include <moveit_msgs/GripperTranslation.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct Grasp_
{
  typedef Grasp_<ContainerAllocator> Type;

  Grasp_()
    : id()
    , pre_grasp_posture()
    , grasp_posture()
    , grasp_pose()
    , grasp_quality(0.0)
    , pre_grasp_approach()
    , post_grasp_retreat()
    , post_place_retreat()
    , max_contact_force(0.0)
    , allowed_touch_objects()  {
    }
  Grasp_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , pre_grasp_posture(_alloc)
    , grasp_posture(_alloc)
    , grasp_pose(_alloc)
    , grasp_quality(0.0)
    , pre_grasp_approach(_alloc)
    , post_grasp_retreat(_alloc)
    , post_place_retreat(_alloc)
    , max_contact_force(0.0)
    , allowed_touch_objects(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _pre_grasp_posture_type;
  _pre_grasp_posture_type pre_grasp_posture;

   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _grasp_posture_type;
  _grasp_posture_type grasp_posture;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _grasp_pose_type;
  _grasp_pose_type grasp_pose;

   typedef double _grasp_quality_type;
  _grasp_quality_type grasp_quality;

   typedef  ::moveit_msgs::GripperTranslation_<ContainerAllocator>  _pre_grasp_approach_type;
  _pre_grasp_approach_type pre_grasp_approach;

   typedef  ::moveit_msgs::GripperTranslation_<ContainerAllocator>  _post_grasp_retreat_type;
  _post_grasp_retreat_type post_grasp_retreat;

   typedef  ::moveit_msgs::GripperTranslation_<ContainerAllocator>  _post_place_retreat_type;
  _post_place_retreat_type post_place_retreat;

   typedef float _max_contact_force_type;
  _max_contact_force_type max_contact_force;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _allowed_touch_objects_type;
  _allowed_touch_objects_type allowed_touch_objects;





  typedef boost::shared_ptr< ::moveit_msgs::Grasp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::Grasp_<ContainerAllocator> const> ConstPtr;

}; // struct Grasp_

typedef ::moveit_msgs::Grasp_<std::allocator<void> > Grasp;

typedef boost::shared_ptr< ::moveit_msgs::Grasp > GraspPtr;
typedef boost::shared_ptr< ::moveit_msgs::Grasp const> GraspConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::Grasp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::Grasp_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::Grasp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::Grasp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::Grasp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::Grasp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::Grasp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::Grasp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e26c8fb64f589c33c5d5e54bd7b5e4cb";
  }

  static const char* value(const ::moveit_msgs::Grasp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe26c8fb64f589c33ULL;
  static const uint64_t static_value2 = 0xc5d5e54bd7b5e4cbULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/Grasp";
  }

  static const char* value(const ::moveit_msgs::Grasp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::Grasp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains a description of a grasp that would be used\n\
# with a particular end-effector to grasp an object, including how to\n\
# approach it, grip it, etc.  This message does not contain any\n\
# information about a \"grasp point\" (a position ON the object).\n\
# Whatever generates this message should have already combined\n\
# information about grasp points with information about the geometry\n\
# of the end-effector to compute the grasp_pose in this message.\n\
\n\
# A name for this grasp\n\
string id\n\
\n\
# The internal posture of the hand for the pre-grasp\n\
# only positions are used\n\
trajectory_msgs/JointTrajectory pre_grasp_posture\n\
\n\
# The internal posture of the hand for the grasp\n\
# positions and efforts are used\n\
trajectory_msgs/JointTrajectory grasp_posture\n\
\n\
# The position of the end-effector for the grasp.  This is the pose of\n\
# the \"parent_link\" of the end-effector, not actually the pose of any\n\
# link *in* the end-effector.  Typically this would be the pose of the\n\
# most distal wrist link before the hand (end-effector) links began.\n\
geometry_msgs/PoseStamped grasp_pose\n\
\n\
# The estimated probability of success for this grasp, or some other\n\
# measure of how \"good\" it is.\n\
float64 grasp_quality\n\
\n\
# The approach direction to take before picking an object\n\
GripperTranslation pre_grasp_approach\n\
\n\
# The retreat direction to take after a grasp has been completed (object is attached)\n\
GripperTranslation post_grasp_retreat\n\
\n\
# The retreat motion to perform when releasing the object; this information\n\
# is not necessary for the grasp itself, but when releasing the object,\n\
# the information will be necessary. The grasp used to perform a pickup\n\
# is returned as part of the result, so this information is available for \n\
# later use.\n\
GripperTranslation post_place_retreat\n\
\n\
# the maximum contact force to use while grasping (<=0 to disable)\n\
float32 max_contact_force\n\
\n\
# an optional list of obstacles that we have semantic information about\n\
# and that can be touched/pushed/moved in the course of grasping\n\
string[] allowed_touch_objects\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
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
MSG: trajectory_msgs/JointTrajectoryPoint\n\
# Each trajectory point specifies either positions[, velocities[, accelerations]]\n\
# or positions[, effort] for the trajectory to be executed.\n\
# All specified values are in the same order as the joint names in JointTrajectory.msg\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
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
MSG: moveit_msgs/GripperTranslation\n\
# defines a translation for the gripper, used in pickup or place tasks\n\
# for example for lifting an object off a table or approaching the table for placing\n\
\n\
# the direction of the translation\n\
geometry_msgs/Vector3Stamped direction\n\
\n\
# the desired translation distance\n\
float32 desired_distance\n\
\n\
# the min distance that must be considered feasible before the\n\
# grasp is even attempted\n\
float32 min_distance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3Stamped\n\
# This represents a Vector3 with reference coordinate frame and timestamp\n\
Header header\n\
Vector3 vector\n\
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

  static const char* value(const ::moveit_msgs::Grasp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::Grasp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.pre_grasp_posture);
      stream.next(m.grasp_posture);
      stream.next(m.grasp_pose);
      stream.next(m.grasp_quality);
      stream.next(m.pre_grasp_approach);
      stream.next(m.post_grasp_retreat);
      stream.next(m.post_place_retreat);
      stream.next(m.max_contact_force);
      stream.next(m.allowed_touch_objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Grasp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::Grasp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::Grasp_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "pre_grasp_posture: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.pre_grasp_posture);
    s << indent << "grasp_posture: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.grasp_posture);
    s << indent << "grasp_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.grasp_pose);
    s << indent << "grasp_quality: ";
    Printer<double>::stream(s, indent + "  ", v.grasp_quality);
    s << indent << "pre_grasp_approach: ";
    s << std::endl;
    Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, indent + "  ", v.pre_grasp_approach);
    s << indent << "post_grasp_retreat: ";
    s << std::endl;
    Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, indent + "  ", v.post_grasp_retreat);
    s << indent << "post_place_retreat: ";
    s << std::endl;
    Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, indent + "  ", v.post_place_retreat);
    s << indent << "max_contact_force: ";
    Printer<float>::stream(s, indent + "  ", v.max_contact_force);
    s << indent << "allowed_touch_objects[]" << std::endl;
    for (size_t i = 0; i < v.allowed_touch_objects.size(); ++i)
    {
      s << indent << "  allowed_touch_objects[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.allowed_touch_objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GRASP_H
