#ifndef ROBOT_H
#define ROBOT_H
#include "main.h"
#include "Subsystems/Required/Drives/Drive.h"
#include "Subsystems/Required/Intakes/Intake.h"
#include "Subsystems/Required/Lifts/Lift.h"
#include "Subsystems/States/StateController.h"
#include "Subsystems/States/ObeyStates/ObeyStateController.h"

class Robot
{
public:
  Robot(void);
  virtual ~Robot(void);

  Subsystem * driveSystem;
  Subsystem * intakeSystem;
  Subsystem * liftSystem;

  virtual void obey(pros::Controller) = 0;
protected:
  StateController * obeyStateController;
  Subsystem ** subsystemList;
};
#endif
