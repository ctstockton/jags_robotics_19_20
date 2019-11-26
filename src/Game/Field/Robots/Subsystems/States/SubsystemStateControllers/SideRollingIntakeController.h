#ifndef SUBSYSTEMS_SUBSYSTEMSTATECONTROLLERS_SIDEROLLINGINTAKECONTROLLER_H
#define SUBSYSTEMS_SUBSYSTEMSTATECONTROLLERS_SIDEROLLINGINTAKECONTROLLER_H
#include "../StateController.h"
#include "../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
#include "../Subsystems/SideRollingIntakeStates/SideRollingIntakeDefaultObey.h"
#include "../Subsystems/SideRollingIntakeStates/SideRollingIntakeScoringObey.h"
class SideRollingIntakeController : public StateController
{
public:
  SideRollingIntakeController(void);
  SideRollingIntakeController(SideRollingIntakeTrack*, SideRollingIntakeTrack*);
  ~SideRollingIntakeController(void);

  void obey(pros::Controller);
private:
  SideRollingIntakeDefaultObey defaultState;
  SideRollingIntakeScoringObey scoringState;
};
#endif
