#ifndef SIDE_ROLLING_INTAKE_STATE_CONTROLLER_WRAPPER_H
#define SIDE_ROLLING_INTAKE_STATE_CONTROLLER_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"
#include "../../../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
class SideRollingIntakeStateControllerWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  SideRollingIntakeStateControllerWrapper(void);
  virtual ~SideRollingIntakeStateControllerWrapper(void);

  virtual StateController * getController(SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*) = 0;
};
#endif
