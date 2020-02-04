#ifndef ROBOTS_ROBOTBUILDS_TREX_H
#define ROBOTS_ROBOTBUILDS_TREX_H

#define ACCELEROMETER 4

#include "../Robot.h"
#include "main.h"
#include "../../Robots/Subsystems/Required/Drives/TankDrive/FourMotor/FourMotorDrive.h"
#include "../../Robots/Subsystems/Required/Lifts/ReverseDoubleForebarLift/TwoMotor/TwoMotorReverseDoubleForebar.h"
#include "../../Robots/Subsystems/Required/Intakes/SideRollingIntake/TwoMotor/TwoMotorIntake.h"
#include "../../Robots/Subsystems/Required/Lifts/Lift.h"
#include "../RobotDetails/TRex/TRexDetails.h"

class TRex : public Robot
{
public:
  TRex(void);
  ~TRex(void);

  void obey(pros::Controller);
};
#endif
