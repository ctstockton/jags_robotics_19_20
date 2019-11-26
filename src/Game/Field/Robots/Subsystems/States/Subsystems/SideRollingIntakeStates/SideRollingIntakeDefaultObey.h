#ifndef SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKEDEFAULTOBEY_H
#define SUBSYSTEMS_SIDEROLLINGINTAKESTATES_SIDEROLLINGINTAKEDEFAULTOBEY_H
#include "SideRollingIntakeState.h"
class SideRollingIntakeDefaultObey : public SideRollingIntakeState
{
public:
  SideRollingIntakeDefaultObey(void);
  ~SideRollingIntakeDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
