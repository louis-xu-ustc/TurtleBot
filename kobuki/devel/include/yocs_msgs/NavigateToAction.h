// Generated by gencpp from file yocs_msgs/NavigateToAction.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_NAVIGATETOACTION_H
#define YOCS_MSGS_MESSAGE_NAVIGATETOACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yocs_msgs/NavigateToActionGoal.h>
#include <yocs_msgs/NavigateToActionResult.h>
#include <yocs_msgs/NavigateToActionFeedback.h>

namespace yocs_msgs
{
template <class ContainerAllocator>
struct NavigateToAction_
{
  typedef NavigateToAction_<ContainerAllocator> Type;

  NavigateToAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  NavigateToAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::yocs_msgs::NavigateToActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::yocs_msgs::NavigateToActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::yocs_msgs::NavigateToActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::yocs_msgs::NavigateToAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::NavigateToAction_<ContainerAllocator> const> ConstPtr;

}; // struct NavigateToAction_

typedef ::yocs_msgs::NavigateToAction_<std::allocator<void> > NavigateToAction;

typedef boost::shared_ptr< ::yocs_msgs::NavigateToAction > NavigateToActionPtr;
typedef boost::shared_ptr< ::yocs_msgs::NavigateToAction const> NavigateToActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::NavigateToAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'yocs_msgs': ['/home/turtlebot/ese_team_project/kobuki/src/yocs_msgs/msg', '/home/turtlebot/ese_team_project/kobuki/devel/share/yocs_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::NavigateToAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::NavigateToAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::NavigateToAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74483e4684b0588107a129113d0f5a01";
  }

  static const char* value(const ::yocs_msgs::NavigateToAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74483e4684b05881ULL;
  static const uint64_t static_value2 = 0x07a129113d0f5a01ULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/NavigateToAction";
  }

  static const char* value(const ::yocs_msgs::NavigateToAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
NavigateToActionGoal action_goal\n\
NavigateToActionResult action_result\n\
NavigateToActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: yocs_msgs/NavigateToActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
NavigateToGoal goal\n\
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
MSG: yocs_msgs/NavigateToGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal\n\
string location\n\
int8   approach_type\n\
int8   num_retry\n\
float32 timeout\n\
\n\
# This variable used when approach near is requested\n\
float32 distance\n\
\n\
int8 APPROACH_NEAR = 11 # Not implemented yet\n\
int8 APPROACH_ON   = 12\n\
\n\
================================================================================\n\
MSG: yocs_msgs/NavigateToActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
NavigateToResult result\n\
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
MSG: yocs_msgs/NavigateToResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Result\n\
bool    success\n\
float32 distance\n\
string  message\n\
\n\
================================================================================\n\
MSG: yocs_msgs/NavigateToActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
NavigateToFeedback feedback\n\
\n\
================================================================================\n\
MSG: yocs_msgs/NavigateToFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Feedback\n\
string  message\n\
float32 distance\n\
float32 remain_time\n\
int8    status\n\
\n\
int8 STATUS_RETRY       = 21\n\
int8 STATUS_INPROGRESS  = 22\n\
int8 STATUS_ERROR       = 23\n\
\n\
";
  }

  static const char* value(const ::yocs_msgs::NavigateToAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavigateToAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::NavigateToAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::NavigateToAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::yocs_msgs::NavigateToActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::yocs_msgs::NavigateToActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::yocs_msgs::NavigateToActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_NAVIGATETOACTION_H
