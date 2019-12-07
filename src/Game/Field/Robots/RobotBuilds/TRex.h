#ifndef ROBOTS_ROBOTBUILDS_TREX_H
#define ROBOTS_ROBOTBUILDS_TREX_H

#define CENTERPOINT_RADIUS 8.25
#define WHEEL_RADIUS 4

#define LEFT_MOTOR_1 12
#define LEFT_MOTOR_2 2
#define LEFT_LIFT_MOTOR 18

#define RIGHT_MOTOR_1 8
#define RIGHT_MOTOR_2 13
#define RIGHT_LIFT_MOTOR 10
#define DRIVE_GEARSET pros::E_MOTOR_GEARSET_18
#define DRIVE_CONSTANT 900

#define TRAY_LIFT_MOTOR 7
#define LIFT_GEARSET pros::E_MOTOR_GEARSET_36
#define TRAY_LIFT_MAX 4000

#define LEFT_INTAKE_MOTOR 19
#define RIGHT_INTAKE_MOTOR 17
#define INTAKE_GEARSET pros::E_MOTOR_GEARSET_36
#define INTAKE_SPEED 127
#define OUTTAKE_SPEED -80

#include "../Robot.h"
#include "main.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleRightTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/FourMotorDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/ReverseDoubleForebarLift/TwoMotor/TwoMotorReverseDoubleForebar.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/TwoMotorIntake.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/SingleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/SingleRightTrack.h"
#include "../../Robots/Subsystems/Required/Lifts/TrayLift/TrayLift.h"
#include "../../Robots/Subsystems/Required/Lifts/Lift.h"

class TRex : public Robot
{
public:
  TRex(void);
  ~TRex(void);

  void obey(pros::Controller);

  Subsystem * trayLiftSystem;
};
#endif
