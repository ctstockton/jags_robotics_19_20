#ifndef SIDE_ROLLING_INTAKE_CONTROLLER_H
#define SIDE_ROLLING_INTAKE_CONTROLLER_H
#include "AbstractControllers/IntakeController.h"
class SideRollingIntakeController : public IntakeController
{
public:
  SideRollingIntakeController(void);
  virtual ~SideRollingIntakeController(void);
};
#endif
