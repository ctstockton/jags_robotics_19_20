#ifndef ROBOTS_ROBOTBUILDS_BIGBOY_H
#define ROBOTS_ROBOTBUILDS_BIGBOY_H

#define LEFT_MOTOR_1 9
#define LEFT_MOTOR_2 17
#define LEFT_LIFT_MOTOR 19

#define RIGHT_MOTOR_1 10
#define RIGHT_MOTOR_2 18
#define RIGHT_LIFT_MOTOR 20
#define DRIVE_GEARSET pros::E_MOTOR_GEARSET_18

#define TRAY_LIFT_MOTOR 11
#define LIFT_GEARSET pros::E_MOTOR_GEARSET_36

#define LEFT_INTAKE_MOTOR 1
#define RIGHT_INTAKE_MOTOR 2
#define INTAKE_GEARSET pros::E_MOTOR_GEARSET_36

#include "main.h"
#include "../Robot.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleRightTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/FourMotorDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/ReverseDoubleForebarLift/TwoMotor/TwoMotorReverseDoubleForebar.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/SideRollingIntake.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/LeftIntakeTrack.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/RightIntakeTrack.h"
#include "../../Robots/Subsystems/Required/Lifts/TrayLift/TrayLift.h"
#include "../../Robots/Subsystems/Required/Lifts/Lift.h"

class Bigboy : public Robot
{
public:
  Bigboy(void);
  ~Bigboy(void);

  void obey(pros::Controller);

  Lift * trayLiftSystem;
};
#endif
