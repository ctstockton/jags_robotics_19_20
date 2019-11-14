#ifndef ROBOT_SUBSYSTEM_SUBSYSTEM_H
#define ROBOT_SUBSYSTEM_SUBSYSTEM_H
#include "main.h"

class Subsystem
{
public:
  Subsystem(void);
  virtual ~Subsystem(void);

  virtual void obey(pros::Controller) = 0;
  virtual void scoringObey(pros::Controller) = 0;
  virtual void executeCommand(int*) = 0;
};
#endif
