
"use strict";

let SetEndpointFrame = require('./SetEndpointFrame.js')
let ConfigureControlMode = require('./ConfigureControlMode.js')
let SetPTPJointSpeedLimits = require('./SetPTPJointSpeedLimits.js')
let SetSpeedOverride = require('./SetSpeedOverride.js')
let SetPTPCartesianSpeedLimits = require('./SetPTPCartesianSpeedLimits.js')
let SetWorkpiece = require('./SetWorkpiece.js')
let SetSmartServoLinSpeedLimits = require('./SetSmartServoLinSpeedLimits.js')
let TimeToDestination = require('./TimeToDestination.js')
let SetSmartServoJointSpeedLimits = require('./SetSmartServoJointSpeedLimits.js')

module.exports = {
  SetEndpointFrame: SetEndpointFrame,
  ConfigureControlMode: ConfigureControlMode,
  SetPTPJointSpeedLimits: SetPTPJointSpeedLimits,
  SetSpeedOverride: SetSpeedOverride,
  SetPTPCartesianSpeedLimits: SetPTPCartesianSpeedLimits,
  SetWorkpiece: SetWorkpiece,
  SetSmartServoLinSpeedLimits: SetSmartServoLinSpeedLimits,
  TimeToDestination: TimeToDestination,
  SetSmartServoJointSpeedLimits: SetSmartServoJointSpeedLimits,
};
