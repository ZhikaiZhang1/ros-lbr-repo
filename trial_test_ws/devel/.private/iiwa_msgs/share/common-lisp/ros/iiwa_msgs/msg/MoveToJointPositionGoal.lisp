; Auto-generated. Do not edit!


(cl:in-package iiwa_msgs-msg)


;//! \htmlinclude MoveToJointPositionGoal.msg.html

(cl:defclass <MoveToJointPositionGoal> (roslisp-msg-protocol:ros-message)
  ((joint_position
    :reader joint_position
    :initarg :joint_position
    :type iiwa_msgs-msg:JointPosition
    :initform (cl:make-instance 'iiwa_msgs-msg:JointPosition)))
)

(cl:defclass MoveToJointPositionGoal (<MoveToJointPositionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToJointPositionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToJointPositionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name iiwa_msgs-msg:<MoveToJointPositionGoal> is deprecated: use iiwa_msgs-msg:MoveToJointPositionGoal instead.")))

(cl:ensure-generic-function 'joint_position-val :lambda-list '(m))
(cl:defmethod joint_position-val ((m <MoveToJointPositionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader iiwa_msgs-msg:joint_position-val is deprecated.  Use iiwa_msgs-msg:joint_position instead.")
  (joint_position m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToJointPositionGoal>) ostream)
  "Serializes a message object of type '<MoveToJointPositionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'joint_position) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToJointPositionGoal>) istream)
  "Deserializes a message object of type '<MoveToJointPositionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'joint_position) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToJointPositionGoal>)))
  "Returns string type for a message object of type '<MoveToJointPositionGoal>"
  "iiwa_msgs/MoveToJointPositionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToJointPositionGoal)))
  "Returns string type for a message object of type 'MoveToJointPositionGoal"
  "iiwa_msgs/MoveToJointPositionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToJointPositionGoal>)))
  "Returns md5sum for a message object of type '<MoveToJointPositionGoal>"
  "291db5d11cb9e1304763b006078fa381")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToJointPositionGoal)))
  "Returns md5sum for a message object of type 'MoveToJointPositionGoal"
  "291db5d11cb9e1304763b006078fa381")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToJointPositionGoal>)))
  "Returns full string definition for message of type '<MoveToJointPositionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%iiwa_msgs/JointPosition joint_position~%~%~%================================================================================~%MSG: iiwa_msgs/JointPosition~%Header header~%JointQuantity position~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: iiwa_msgs/JointQuantity~%float32 a1~%float32 a2~%float32 a3~%float32 a4~%float32 a5~%float32 a6~%float32 a7~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToJointPositionGoal)))
  "Returns full string definition for message of type 'MoveToJointPositionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%iiwa_msgs/JointPosition joint_position~%~%~%================================================================================~%MSG: iiwa_msgs/JointPosition~%Header header~%JointQuantity position~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: iiwa_msgs/JointQuantity~%float32 a1~%float32 a2~%float32 a3~%float32 a4~%float32 a5~%float32 a6~%float32 a7~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToJointPositionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'joint_position))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToJointPositionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToJointPositionGoal
    (cl:cons ':joint_position (joint_position msg))
))
