#ifndef SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#define SIDEROLLINGINTAKE_TWOMOTOR_TWOMOTORINTAKE_H
#include "../SideRollingIntake.h"
#include "../SideRollingIntakeTrack.h"
#include "SingleLeftTrack.h"
#include "SingleRightTrack.h"
#include "main.h"

class TwoMotorIntake : public SideRollingIntake
{
public:
  TwoMotorIntake(void);
  TwoMotorIntake(int L1, int R1);
  virtual ~TwoMotorIntake(void);

  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;

  void obey(pros::Controller);
};
#endif
