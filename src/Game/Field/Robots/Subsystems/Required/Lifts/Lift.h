#ifndef REQUIRED_LIFTS_LIFT_H
#define REQUIRED_LIFTS_LIFT_H
#include "../../Subsystem.h"
#include "main.h"

class Lift : public Subsystem
{
public:
  Lift(void);
  virtual ~Lift(void);

  virtual void obey(pros::Controller) = 0;
};
#endif
