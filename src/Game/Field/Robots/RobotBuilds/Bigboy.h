#ifndef ROBOTS_ROBOTBUILDS_BIGBOY_H
#define ROBOTS_ROBOTBUILDS_BIGBOY_H

#define CENTERPOINT_RADIUS 8.25
#define WHEEL_RADIUS 4

#define LEFT_MOTOR_1 9
#define LEFT_MOTOR_2 5
#define LEFT_MOTOR_3 4
#define LEFT_LIFT_MOTOR 20

#define RIGHT_MOTOR_1 8
#define RIGHT_MOTOR_2 2
#define RIGHT_MOTOR_3 1
#define RIGHT_LIFT_MOTOR 19

#define H_MOTOR 11
#define H_DRIVE_OFFSET 80

#define DRIVE_GEARSET pros::E_MOTOR_GEARSET_18
#define DRIVE_CONSTANT 900
#define ROTATE_CONSTANT ((CENTERPOINT_RADIUS*DRIVE_CONSTANT)/(360*WHEEL_RADIUS))

#define TRAY_LIFT_MOTOR 12
#define TRAY_LIFT_BUTTON H
#define LIFT_GEARSET pros::E_MOTOR_GEARSET_36
#define TRAY_LIFT_MAX 13000
#define TRAY_LIFT_POSITION_ONE 6500
#define TRAY_LIFT_POSITION_TWO 4500

#define LEFT_INTAKE_MOTOR 18
#define RIGHT_INTAKE_MOTOR 17
#define INTAKE_GEARSET pros::E_MOTOR_GEARSET_36

#include "main.h"
#include "../Robot.h"
#include "../../Robots/Subsystems/Required/Drives/HDrive/SevenMotor/SevenMotorHDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/MonobarLift/TwoMotor/TwoMotorMonobarLift.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/TwoMotorIntake.h"
#include "../../Robots/Subsystems/Required/Lifts/TrayLift/TrayLift.h"
#include "../../Robots/Subsystems/Required/Lifts/Lift.h"
#include "../RobotDetails/Bigboy/BigboyDetails.h"

class Bigboy : public Robot
{
public:
  Bigboy(void);
  ~Bigboy(void);

  void obey(pros::Controller);

  Lift * trayLiftSystem;
};
#endif
