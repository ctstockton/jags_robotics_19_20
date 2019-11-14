#ifndef SUBSYSTEMS_STATES_STATE_H
#define SUBSYSTEMS_STATES_STATE_H
#include"../Subsystem.h"

class State
{
public:
  State(void);
  virtual ~State(void);

  virtual void obey(pros::Controller, Subsystem**) = 0;
  virtual int changeState(pros::Controller) = 0;
};
#endif
