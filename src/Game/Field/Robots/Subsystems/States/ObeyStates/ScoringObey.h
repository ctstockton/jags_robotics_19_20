#ifndef STATES_OBEYSTATES_SCORINGSTATE_H
#define STATES_OBEYSTATES_SCORINGSTATE_H
#include "ObeyState.h"
class ScoringState : public ObeyState
{
public:
  ScoringState(void)
  ~ScoringState(void);

  void obey(pros::Controller);
};
#endif
