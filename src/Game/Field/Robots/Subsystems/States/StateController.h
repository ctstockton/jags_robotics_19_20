/*-This is the interface from which all stateControllers inheret.
  -There is currently only a single stateController, the obeyStateController
*/

#ifndef ROBOTS_STATES_STATECONTROLLER_H
#define ROBOTS_STATES_STATECONTROLLER_H
#include "main.h"
#include "State.h"

class StateController
{
public:
  StateController(void);
  virtual ~StateController(void);

  virtual void obey(pros::Controller) = 0;
protected:
  //This has currentState, which is set in the constructor of the specific
  //  stateController object
  State * currentState;
  //The targetState is redefined via the return type of each specific state's
  //  changeState method. The stateController object changes the currentState
  //  to a different state based on this number
  int targetState;
};
#endif
