/*-This is the interface that all robot objects are initialized from.
  -There are currently two ways for a robot to be controlled
  - 1) The obey system, which controls the robot from a controller through
      the stateController liftSystem
  - 2) The command system, takes the robot as a member and then calls
      command methods of the robot's subsystems
*/
#ifndef ROBOT_H
#define ROBOT_H
#include "main.h"
#include "Subsystems/Required/Drives/Drive.h"
#include "Subsystems/Required/Intakes/Intake.h"
#include "Subsystems/Required/Lifts/Lift.h"
#include "Subsystems/States/StateController.h"
#include "Subsystems/States/ObeyStates/ObeyStateController.h"
#include "RobotDetails/RobotDetails.h"
#include <string>

class Robot
{
public:
  Robot(void);
  virtual ~Robot(void);

  //All robots have a driveSystem, an intakeSystem, and a liftSystem.
  //Specific robots may have additional subsystems, which will be
  //  declared in their specific h.files
  Subsystem * driveSystem;
  Subsystem * intakeSystem;
  Subsystem * liftSystem;
  RobotDetails * details;

  virtual void obey(pros::Controller) = 0;
protected:
  int interrupt;
};
#endif
