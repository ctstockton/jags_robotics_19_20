#include "ScoringAssistTwoStateSideRollingIntakeControllerWrapper.h"

ScoringAssistTwoStateSideRollingIntakeControllerWrapper::ScoringAssistTwoStateSideRollingIntakeControllerWrapper(void)
{}

ScoringAssistTwoStateSideRollingIntakeControllerWrapper::~ScoringAssistTwoStateSideRollingIntakeControllerWrapper(void)
{}

StateController * ScoringAssistTwoStateSideRollingIntakeControllerWrapper::getController(SideRollingIntakeTrack * left, SideRollingIntakeTrack * right, RobotDetails* details)
{
  this->stateController = new ScoringAssistTwoStateSideRollingIntakeSC(left, right, details->getIntakeCommand1(), details->getIntakeCommand2());
  return this->stateController;
}
