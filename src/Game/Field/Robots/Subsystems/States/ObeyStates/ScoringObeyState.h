#ifndef STATES_OBEYSTATES_SCORINGOBEYSTATE_H
#define STATES_OBEYSTATES_SCORINGOBEYSTATE_H
#include "ObeyState.h"

class ScoringObeyState : public ObeyState
{
public:
  ScoringObeyState(void);
  ~ScoringObeyState(void);

  void obey(pros::Controller, Subsystem**);
  int changeState(pros::Controller);
};
#endif
