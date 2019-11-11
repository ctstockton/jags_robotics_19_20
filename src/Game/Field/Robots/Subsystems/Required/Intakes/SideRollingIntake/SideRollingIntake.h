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
  virtual ~SideRollingIntake(void);
};
#endif
