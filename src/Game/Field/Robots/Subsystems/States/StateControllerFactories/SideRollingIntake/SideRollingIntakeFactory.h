#ifndef SIDE_ROLLING_INTAKE_FACTORY_H
#define SIDE_ROLLING_INTAKE_FACTORY_H
#include "main.h"
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/SideRollingIntake/SideRollingIntakeStateControllerWrapper.h"
#include "../FunctionWrappers/SideRollingIntake/ScoringAssistTwoStateSideRollingIntakeControllerWrapper.h"
class SideRollingIntakeFactory : public StateControllerFactory
{
public:
  SideRollingIntakeFactory(void);
  SideRollingIntakeFactory(std::string, SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*);
  ~SideRollingIntakeFactory(void);
private:
  std::map<std::string, SideRollingIntakeStateControllerWrapper*> map;
  SideRollingIntakeStateControllerWrapper * wrapper;
  ScoringAssistTwoStateSideRollingIntakeControllerWrapper * scoringAssistTwoStateSideRollingIntakeControllerWrapper;
};
#endif
