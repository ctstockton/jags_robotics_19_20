#include "ScoringAssistTwoStateSideRollingIntakeSCWrapper.h"

ScoringAssistTwoStateSideRollingIntakeSCWrapper::ScoringAssistTwoStateSideRollingIntakeSCWrapper(void)
{}

ScoringAssistTwoStateSideRollingIntakeSCWrapper::~ScoringAssistTwoStateSideRollingIntakeSCWrapper(void)
{}

StateController * ScoringAssistTwoStateSideRollingIntakeSCWrapper::getController(SideRollingIntakeTrack * left, SideRollingIntakeTrack * right, RobotDetails* details)
{
  this->stateController = new ScoringAssistTwoStateSideRollingIntakeSC(left, right, details->getIntakeCommand1(), details->getIntakeCommand2());
  return this->stateController;
}
