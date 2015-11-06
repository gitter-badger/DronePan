//
//  global.h
//  DronePan
//
//  Created by V Mahadev on 06/11/15.
//  Copyright © 2015 Unmanned Airlines, LLC. All rights reserved.
//

#ifndef global_h
#define global_h

// Command Center

/*enum DroneType{
    Inspire1,
    Phantom3
};*/

enum _CommandResponseStatus{
    failure,
    error,
    success
};

typedef enum _CommandResponseStatus CommandResponseStatus;

enum _NoteType{
    CmdCenterDroneChanged=0,
    CmdCenterDroneNotConnected,
    CmdCenterDroneConnected,
    CmdCenterDroneConnectionFailed,
    CmdCenterDroneTypeUnknown,
    CmdCenterCmdExecInProgress,
    CmdCenterCmdSuccess,
    CmdCenterCmdFailed,
    CmdCenterCmdError,
    CmdCenterGimbalRotationFailed,//Temporary Constants
    CmdCenterGimbalRotationSuccess// Should be removed
};

typedef enum _NoteType NoteType;

enum _DroneDirectionType{
    
    DroneDirectionAbsolute=0,
    DroneDirectionNorth,
    DroneDirectionEast,
    DroneDirectionSouth,
    DroneDirectionWest,
    DroneDirectionNorthWest,
    DroneDirectionNorthEast,
    DroneDirectionSouthEast,
    DroneDirectionSouthWest,
    
};

typedef enum _DroneDirectionType DroneDirection;

enum _YawModeType{
    
    Gimbal=0,
    Aircraft
};

typedef enum _YawModeType YawMode;


FOUNDATION_EXPORT NSString *const NotificationCmdCenter;
FOUNDATION_EXPORT NSString *const NotificationPitchAndYaw;
FOUNDATION_EXPORT NSString *const NotificationAltitude;
FOUNDATION_EXPORT NSString *const NotificationDroneConnected;

#endif /* global_h */