#ifndef ROBOTS_STATES_STATECONTROLLER_H
#define ROBOTS_STATES_STATECONTROLLER_H
#include "main.h"
#include "../Subsystem.h"
#include "State.h"

class StateController
{
public:
  StateController(void);
  virtual ~StateController(void);

  virtual void obey(pros::Controller) = 0;
  virtual void setSubsystemList(Subsystem**) = 0;
protected:
    State * currentState;
    int targetState;
    Subsystem ** subsystemList;
};
#endif
