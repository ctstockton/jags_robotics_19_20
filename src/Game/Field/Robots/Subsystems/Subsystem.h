#ifndef ROBOT_SUBSYSTEM_SUBSYSTEM_H
#define ROBOT_SUBSYSTEM_SUBSYSTEM_H
#include "main.h"
#include <cstring>
#include <string>
#include "States/StateController.h"
#include "../RobotDetails/RobotDetails.h"

class Subsystem
{
public:
  Subsystem(void);
  virtual ~Subsystem(void);

  virtual void obey(pros::Controller) = 0;
  virtual void executeCommand(int*) = 0;
protected:
  StateController * stateController;
};
#endif
