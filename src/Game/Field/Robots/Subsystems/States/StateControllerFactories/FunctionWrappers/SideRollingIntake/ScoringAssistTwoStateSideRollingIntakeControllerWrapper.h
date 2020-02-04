#ifndef SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_CONTROLLER_WRAPPER_H
#define SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_CONTROLLER_WRAPPER_H
#include "SideRollingIntakeStateControllerWrapper.h"
#include "../../../SubsystemStateControllers/SideRollingIntake/ScoringAssistTwoStateSideRollingIntakeSC.h"
class ScoringAssistTwoStateSideRollingIntakeControllerWrapper : public SideRollingIntakeStateControllerWrapper
{
public:
  ScoringAssistTwoStateSideRollingIntakeControllerWrapper(void);
  ~ScoringAssistTwoStateSideRollingIntakeControllerWrapper(void);

  StateController * getController(SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*);
};
#endif
