#ifndef SIDEROLLINGINTAKE_TWOMOTOR_SINGLERIGHTTRACK_H
#define SIDEROLLINGINTAKE_TWOMOTOR_SINGLERIGHTTRACK_H
#include "../RightIntakeTrack.h"
#include "main.h"

class SingleRightIntakeTrack : public RightIntakeTrack
{
public:
  SingleRightIntakeTrack(void);
  SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear);
  SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear, int in, int out);
  ~SingleRightIntakeTrack(void);

  void obey(pros::Controller);
  void scoringObey(pros::Controller);

private:
  pros::Motor * rightIntakeMotor;
  int in;
  int out;
};
#endif
