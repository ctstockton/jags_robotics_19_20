#ifndef ROBOTS_ROBOTBUILDS_BIGBOY_H
#define ROBOTS_ROBOTBUILDS_BIGBOY_H

#define CENTERPOINT_RADIUS 8.25
#define WHEEL_RADIUS 4

#define LEFT_MOTOR_1 9
#define LEFT_MOTOR_2 17
#define LEFT_LIFT_MOTOR 19

#define RIGHT_MOTOR_1 10
#define RIGHT_MOTOR_2 18
#define RIGHT_LIFT_MOTOR 20
#define DRIVE_GEARSET pros::E_MOTOR_GEARSET_18
#define DRIVE_CONSTANT 900
#define ROTATE_CONSTANT ((CENTERPOINT_RADIUS*DRIVE_CONSTANT)/(360*WHEEL_RADIUS))

#define TRAY_LIFT_MOTOR 11
#define LIFT_GEARSET pros::E_MOTOR_GEARSET_36
#define TRAY_LIFT_MAX 9500
#define TRAY_LIFT_POSITION_ONE 6500
#define TRAY_LIFT_POSITION_TWO 4500

#define LEFT_INTAKE_MOTOR 1
#define RIGHT_INTAKE_MOTOR 2
#define INTAKE_GEARSET pros::E_MOTOR_GEARSET_36

#include "main.h"
#include "../Robot.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleRightTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/FourMotorDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/MonobarLift/TwoMotor/TwoMotorMonobarLift.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/TwoMotorIntake.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/SingleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/SingleRightTrack.h"
#include "../../Robots/Subsystems/Required/Lifts/TrayLift/BigboyTrayLift.h"
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
