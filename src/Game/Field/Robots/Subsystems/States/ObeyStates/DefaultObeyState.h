/*-This is the standard state in which the stateController begins
*/
#ifndef SUBSYSTEMS_STATES_DEFAULTOBEYSTATE_H
#define SUBSYSTEMS_STATES_DEFAULTOBEYSTATE_H
#include "ObeyState.h"

class DefaultObeyState : public ObeyState
{
public:
  DefaultObeyState(void);
  ~DefaultObeyState(void);

  //This calls the obey method on the subsystems in the Subsystem pointer array
  void obey(pros::Controller);
  //This method returns an int of '2' when the down button on the controller is
  //  pressed
  int changeState(pros::Controller);
};
#endif
