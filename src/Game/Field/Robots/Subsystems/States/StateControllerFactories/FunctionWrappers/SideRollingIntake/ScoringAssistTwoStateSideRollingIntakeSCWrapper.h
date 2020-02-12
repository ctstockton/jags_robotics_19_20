#ifndef SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_SC_WRAPPER_H
#define SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_SC_WRAPPER_H
#include "SideRollingIntakeSCWrapper.h"
#include "../../../SubsystemStateControllers/SideRollingIntake/ScoringAssistTwoStateSideRollingIntakeSC.h"
class ScoringAssistTwoStateSideRollingIntakeSCWrapper : public SideRollingIntakeSCWrapper
{
public:
  ScoringAssistTwoStateSideRollingIntakeSCWrapper(void);
  ~ScoringAssistTwoStateSideRollingIntakeSCWrapper(void);

  StateController * getController(SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*);
};
#endif
