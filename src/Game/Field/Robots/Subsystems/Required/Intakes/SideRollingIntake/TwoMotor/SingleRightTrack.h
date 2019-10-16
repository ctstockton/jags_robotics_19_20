#ifndef SIDEROLLINGINTAKE_TWOMOTOR_SINGLERIGHTTRACK_H
#define SIDEROLLINGINTAKE_TWOMOTOR_SINGLERIGHTTRACK_H
#include "../RightIntakeTrack.h"
#include "main.h"

class SingleRightIntakeTrack : public RightIntakeTrack
{
public:
  SingleRightIntakeTrack(void);
  SingleRightIntakeTrack(int R1);
  ~SingleRightIntakeTrack(void);

  void obey(pros::Controller);

protected:
  pros::Motor * rightMotorIntake;
  pros::Motor * rightMotorOutput;
};
#endif
