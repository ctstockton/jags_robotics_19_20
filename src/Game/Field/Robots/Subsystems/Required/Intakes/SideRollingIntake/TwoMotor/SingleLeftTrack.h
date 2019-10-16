#ifndef SIDEROLLINGINTAKE_TWOMOTOR_SINGLELEFTINTAKETRACK_H
#define SIDEROLLINGINTAKE_TWOMOTOR_SINGLELEFTINTAKETRACK_H
#include "../LeftIntakeTrack.h"
#include "main.h"

class SingleLeftIntakeTrack : public LeftIntakeTrack
{
public:
  SingleLeftIntakeTrack(void);
  SingleLeftIntakeTrack(int L1);
  ~SingleLeftIntakeTrack(void);

  void obey(pros::Controller);

protected:
  pros::Motor * leftMotorIntake;
  pros::Motor * leftMotorOutput;
};
#endif
