#ifndef SIDE_ROLLING_INTAKE_SCORING_OBEY_H
#define SIDE_ROLLING_INTAKE_SCORING_OBEY_H
#include "SideRollingIntakeState.h"
class SideRollingIntakeScoringObey : public SideRollingIntakeState
{
public:
  SideRollingIntakeScoringObey(void);
  SideRollingIntakeScoringObey(SideRollingIntakeTrack*, SideRollingIntakeTrack*, pros::controller_digital_e_t, int);
  ~SideRollingIntakeScoringObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
