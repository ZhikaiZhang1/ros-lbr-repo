// Generated by gencpp from file iiwa_msgs/SetSmartServoLinSpeedLimits.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITS_H
#define IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITS_H

#include <ros/service_traits.h>


#include <iiwa_msgs/SetSmartServoLinSpeedLimitsRequest.h>
#include <iiwa_msgs/SetSmartServoLinSpeedLimitsResponse.h>


namespace iiwa_msgs
{

struct SetSmartServoLinSpeedLimits
{

typedef SetSmartServoLinSpeedLimitsRequest Request;
typedef SetSmartServoLinSpeedLimitsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetSmartServoLinSpeedLimits
} // namespace iiwa_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimits > {
  static const char* value()
  {
    return "ba27ded3da7c7c0e58e5316ff3ba3f60";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimits&) { return value(); }
};

template<>
struct DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimits > {
  static const char* value()
  {
    return "iiwa_msgs/SetSmartServoLinSpeedLimits";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimits&) { return value(); }
};


// service_traits::MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest> should match 
// service_traits::MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimits > 
template<>
struct MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest> should match 
// service_traits::DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimits > 
template<>
struct DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest>
{
  static const char* value()
  {
    return DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse> should match 
// service_traits::MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimits > 
template<>
struct MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::iiwa_msgs::SetSmartServoLinSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse> should match 
// service_traits::DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimits > 
template<>
struct DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse>
{
  static const char* value()
  {
    return DataType< ::iiwa_msgs::SetSmartServoLinSpeedLimits >::value();
  }
  static const char* value(const ::iiwa_msgs::SetSmartServoLinSpeedLimitsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETSMARTSERVOLINSPEEDLIMITS_H
