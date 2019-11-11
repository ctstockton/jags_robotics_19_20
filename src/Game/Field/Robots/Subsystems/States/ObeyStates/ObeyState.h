#ifndef STATES_OBEYSTATES_OBEYSTATE_H
#define STATES_OBEYSTATES_OBEYSTATE_H
#include "../State.h"
#include "main.h"

class ObeyState : public State
{
public:
  ObeyState();
  virtual ~ObeyState();

  virtual void obey(pros::Controller) = 0;
};
#endif
