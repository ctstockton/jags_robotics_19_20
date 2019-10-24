#ifndef INTAKES_SIDEROLLINGINTAKE_RIGHTINTAKETRACK_H
#define INTAKES_SIDEROLLINGINTAKE_RIGHTINTAKETRACK_H
#include "SideRollingIntakeTrack.h"
#include "main.h"

class RightIntakeTrack : public SideRollingIntakeTrack
{
public:
  RightIntakeTrack(void);
  RightIntakeTrack(int R1);
  virtual ~RightIntakeTrack(void);

  void obey(pros::Controller);

protected:
  pros::Motor * rightIntakeMotor;
};
#endif
