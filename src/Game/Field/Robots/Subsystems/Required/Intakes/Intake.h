#ifndef REQUIRED_INTAKES_INTAKE_H
#define REQUIRED_INTAKES_INTAKE_H
#include "../../Subsystem.h"
#include "main.h"

class Intake : public Subsystem
{
public:
  Intake(void);
  virtual ~Intake(void);

  virtual void obey(pros::Controller) = 0;
};
#endif
