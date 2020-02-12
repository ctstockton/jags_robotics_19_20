#ifndef SIDE_ROLLING_INTAKE_SC_H
#define SIDE_ROLLING_INTAKE_SC_H
#include "AbstractControllers/IntakeStateController.h"
class SideRollingIntakeSC : public IntakeStateController
{
public:
  SideRollingIntakeSC(void);
  virtual ~SideRollingIntakeSC(void);
private:
  int i;
};
#endif
