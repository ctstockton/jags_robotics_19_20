#ifndef INTAKES_SIDEROLLINGINTAKE_LEFTINTAKETRACK_H
#define INTAKES_SIDEROLLINGINTAKE_LEFTINTAKETRACK_H
#include "SideRollingIntakeTrack.h"
#include "main.h"

class LeftIntakeTrack : public SideRollingIntakeTrack
{
public:
  LeftIntakeTrack(void);
  LeftIntakeTrack(int L1, pros::motor_gearset_e gear);
  virtual ~LeftIntakeTrack(void);

  void obey(pros::Controller);

protected:
  pros::Motor * leftIntakeMotor;
};
#endif
