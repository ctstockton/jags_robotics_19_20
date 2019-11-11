#ifndef SUBSYSTEMS_STATES_STATE_H
#define SUBSYSTEMS_STATES_STATE_H
#include"../Subsystem.h"

class State
{
public:
  State(void);
  virtual ~State(void);
  void setRobotSubsystems(void);
  Subsystem * getRobotSubsystem(int);

protected:
  virtual void changeState() = 0;
  Subsystem * robotSubsystems;
};
#endif
