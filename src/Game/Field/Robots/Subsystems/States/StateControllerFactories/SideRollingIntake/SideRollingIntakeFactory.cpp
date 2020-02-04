#include "SideRollingIntakeFactory.h"

SideRollingIntakeFactory::SideRollingIntakeFactory(void):
wrapper (0)
{}

SideRollingIntakeFactory::SideRollingIntakeFactory(std::string string, SideRollingIntakeTrack* left, SideRollingIntakeTrack* right, RobotDetails * details)
{
  scoringAssistTwoStateSideRollingIntakeControllerWrapper = new ScoringAssistTwoStateSideRollingIntakeControllerWrapper();
  this->map["scoringAssistTwoMotorSideRollingIntakeController"] = scoringAssistTwoStateSideRollingIntakeControllerWrapper;
  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(left, right, details);
}

SideRollingIntakeFactory::~SideRollingIntakeFactory(void)
{
  delete scoringAssistTwoStateSideRollingIntakeControllerWrapper;
}
