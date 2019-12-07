#ifndef SIDEROLLINGINTAKE_TWOMOTOR_SINGLELEFTINTAKETRACK_H
#define SIDEROLLINGINTAKE_TWOMOTOR_SINGLELEFTINTAKETRACK_H
#include "../LeftIntakeTrack.h"
#include "main.h"

class SingleLeftIntakeTrack : public LeftIntakeTrack
{
public:
  SingleLeftIntakeTrack(void);
  SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear);
  SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear, int in, int out);
  ~SingleLeftIntakeTrack(void);

  void obey(pros::Controller);
  void scoringObey(pros::Controller);

private:
  pros::Motor * leftIntakeMotor;
  int in;
  int out;
};
#endif
