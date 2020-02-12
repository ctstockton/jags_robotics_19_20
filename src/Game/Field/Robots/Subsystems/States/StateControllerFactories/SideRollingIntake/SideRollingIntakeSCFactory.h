#ifndef SIDE_ROLLING_INTAKE_SC_FACTORY_H
#define SIDE_ROLLING_INTAKE_SC_FACTORY_H
#include "main.h"
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/SideRollingIntake/SideRollingIntakeSCWrapper.h"
#include "../FunctionWrappers/SideRollingIntake/ScoringAssistTwoStateSideRollingIntakeSCWrapper.h"
class SideRollingIntakeSCFactory : public StateControllerFactory
{
public:
  SideRollingIntakeSCFactory(void);
  SideRollingIntakeSCFactory(std::string, SideRollingIntakeTrack*, SideRollingIntakeTrack*, RobotDetails*);
  ~SideRollingIntakeSCFactory(void);
private:
  std::map<std::string, SideRollingIntakeSCWrapper*> map;
  SideRollingIntakeSCWrapper * wrapper;
  ScoringAssistTwoStateSideRollingIntakeSCWrapper * scoringAssistTwoStateSideRollingIntakeSCWrapper;
};
#endif
