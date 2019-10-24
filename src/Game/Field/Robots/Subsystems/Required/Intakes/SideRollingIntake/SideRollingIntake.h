#ifndef INTAKES_SIDEROLLINGINTAKE_SIDEROLLINGINTAKE_H
#define INTAKES_SIDEROLLINGINTAKE_SIDEROLLINGINTAKE_H
#include "../Intake.h"
#include "LeftIntakeTrack.h"
#include "RightIntakeTrack.h"
#include "main.h"

class SideRollingIntake : public Intake
{
public:
  SideRollingIntake(void);
  SideRollingIntake(int L1, int R1);
  virtual ~SideRollingIntake(void);

  SideRollingIntakeTrack * leftIntakeTrack;
  SideRollingIntakeTrack * rightIntakeTrack;

  void obey(pros::Controller);
};
#endif
