#include "SideRollingIntakeSCFactory.h"

SideRollingIntakeSCFactory::SideRollingIntakeSCFactory(void):
wrapper (0)
{}

SideRollingIntakeSCFactory::SideRollingIntakeSCFactory(std::string string, SideRollingIntakeTrack* left, SideRollingIntakeTrack* right, RobotDetails* details)
{
  scoringAssistTwoStateSideRollingIntakeSCWrapper = new ScoringAssistTwoStateSideRollingIntakeSCWrapper();
  this->map["scoringAssistTwoMotorSideRollingIntakeController"] = scoringAssistTwoStateSideRollingIntakeSCWrapper;
  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(left, right, details);
}

SideRollingIntakeSCFactory::~SideRollingIntakeSCFactory(void)
{
  delete scoringAssistTwoStateSideRollingIntakeSCWrapper;
}
