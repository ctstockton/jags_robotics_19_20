#ifndef ROBOT_H
#define ROBOT_H
#include "main.h"
#include "Subsystems/Required/Drives/Drive.h"
#include "Subsystems/Required/Intakes/Intake.h"
#include "Subsystems/Required/Lifts/Lift.h"

class Robot
{
public:
  Robot(void);
  virtual ~Robot(void);

  Drive * driveSystem;
  Intake * intakeSystem;
  Lift * liftSystem;

  virtual void obey(pros::Controller) = 0;
};
#endif
