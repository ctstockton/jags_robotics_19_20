#ifndef ROBOTBUILDER_BUILDS_ELLIE19
#define ROBOTBUILDER_BUILDS_ELLIE19

#define LEFT_MOTOR_1 1
#define LEFT_MOTOR_2 4
#define LEFT_MOTOR_3 7
#define LEFT_MOTOR_4 null

#define RIGHT_MOTOR_1 2
#define RIGHT_MOTOR_2 5
#define RIGHT_MOTOR_3 8
#define RIGHT_MOTOR_4 null

#include "main.h"
#include "../Robot.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/SixMotor/TripleLeftTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/SixMotor/TripleRightTrack.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/SixMotor/SixMotorDrive.h"
//#include "../RobotDetails/Ellie19.h"
class Ellie19 : public Robot
{
public:
  Ellie19(void);
  ~Ellie19(void);

  void obey(pros::Controller);
};
#endif
