#ifndef SUBSYSTEMS_STATES_DEFAULTOBEY_H
#define SUBSYSTEMS_STATES_DEFAULTOBEY_H
#include "ObeyState.h"

class DefaultObey : public ObeyState
{
public:
  DefaultObey();
  ~DefaultObey();

  void obey(pros::Controller);
private:
  void changeState();
};
#endif
