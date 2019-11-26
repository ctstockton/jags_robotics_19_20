#ifndef SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKESCORINGOBEY_H
#define SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKESCORINGOBEY_H
#include "SideRollingIntakeState.h"
class SideRollingIntakeScoringObey : public SideRollingIntakeState
{
public:
  SideRollingIntakeScoringObey(void);
  ~SideRollingIntakeScoringObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
