/*-This is currently the only child of the StateController interface
  -The defaultState is the standard state and is initialized is the
  -constructor
*/
#ifndef STATES_OBEYSTATES_OBEYSTATECONTROLLER_H
#define STATES_OBEYSTATES_OBEYSTATECONTROLLER_H
#include "../StateController.h"
#include "DefaultObeyState.h"
#include "ScoringObeyState.h"

class ObeyStateController : public StateController
{
public:
  ObeyStateController(void);
  ~ObeyStateController(void);

  void obey(pros::Controller);
  void setSubsystemList(Subsystem**);

private:
  DefaultObeyState defaultState;
  ScoringObeyState scoringState;
};
#endif
