#ifndef SUBSYSTEMS_STATES_STATE_H
#define SUBSYSTEMS_STATES_STATE_H
#include "main.h"
#include <cstring>
class State
{
public:
  State(void);
  virtual ~State(void);

  //Each state has an obey command which cycles through the parameter
  //  subsystem pointer array and calls the state specific obey variant
  //  command on each subsystem object
  virtual void obey(pros::Controller) = 0;
  //Each state also has a changeState method that defines under which
  //  circumatances the state should change and to which state it should
  //  change to. The method returns an int which corresponds to the
  //  target state
  virtual int changeState(pros::Controller) = 0;
protected:
  int returnValue;
};
#endif
