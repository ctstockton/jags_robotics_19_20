#ifndef SIDE_ROLLING_INTAKE_SC_WRAPPER_H
#define SIDE_ROLLING_INTAKE_SC_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"
#include "../../../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
class SideRollingIntakeSCWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  SideRollingIntakeSCWrapper(void);
  virtual ~SideRollingIntakeSCWrapper(void);

  virtual StateController * getController(SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*) = 0;
};
#endif
