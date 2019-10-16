#ifndef INTAKES_INTAKEUTIL_INTAKETRACK_H
#define INTAKES_INTAKEUTIL_INTAKETRACK_H
#include "main.h"

class IntakeTrack
{
public:
  IntakeTrack(void);
  virtual ~IntakeTrack(void);

  virtual void obey(pros::Controller) = 0;
};
#endif
