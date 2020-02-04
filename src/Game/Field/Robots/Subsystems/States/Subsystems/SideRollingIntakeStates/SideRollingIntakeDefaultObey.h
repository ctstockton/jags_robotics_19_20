#ifndef SIDE_ROLLING_INTAKE_DEFAULT_OBEY_H
#define SIDE_ROLLING_INTAKE_DEFAULT_OBEY_H
#include "SideRollingIntakeState.h"
class SideRollingIntakeDefaultObey : public SideRollingIntakeState
{
public:
  SideRollingIntakeDefaultObey(void);
  SideRollingIntakeDefaultObey(SideRollingIntakeTrack*, SideRollingIntakeTrack*, pros::controller_digital_e_t, int);
  ~SideRollingIntakeDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
