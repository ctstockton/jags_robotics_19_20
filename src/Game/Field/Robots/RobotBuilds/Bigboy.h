#ifndef ROBOTS_ROBOTBUILDS_BIGBOY_H
#define ROBOTS_ROBOTBUILDS_BIGBOY_H

#define LEFT_MOTOR_1 9
#define LEFT_MOTOR_2 17
#define LEFT_LIFT_MOTOR 19

#define RIGHT_MOTOR_1 10
#define RIGHT_MOTOR_2 18
#define RIGHT_LIFT_MOTOR 20

#define TRAY_LIFT 11

#include "main.h"
#include "../Robot.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/DoubleRightTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/FourMotorDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/ReverseDoubleForebarLift/TwoMotor/TwoMotorReverseDoubleForebar.h"

class Bigboy : public Robot
{
public:
  Bigboy(void);
  ~Bigboy(void);

  void obey(pros::Controller);
};
#endif
