#ifndef SUBSYSTEMS_STATES_DEFAULTOBEYSTATE_H
#define SUBSYSTEMS_STATES_DEFAULTOBEYSTATE_H
#include "ObeyState.h"

class DefaultObeyState : public ObeyState
{
public:
  DefaultObeyState(void);
  ~DefaultObeyState(void);

  void obey(pros::Controller, Subsystem**);
  int changeState(pros::Controller);
};
#endif
