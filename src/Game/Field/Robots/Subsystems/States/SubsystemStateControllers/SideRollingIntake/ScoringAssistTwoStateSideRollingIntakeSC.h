#ifndef SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_SC_H
#define SCORING_ASSIST_TWO_STATE_SIDE_ROLLING_INTAKE_SC_H
#include "../SideRollingIntakeController.h"
#include "../../Subsystems/SideRollingIntakeStates/SideRollingIntakeDefaultObey.h"
#include "../../Subsystems/SideRollingIntakeStates/SideRollingIntakeScoringObey.h"
#include "../../../Required/Intakes/SideRollingIntake/SideRollingIntakeTrack.h"
class ScoringAssistTwoStateSideRollingIntakeSC : public SideRollingIntakeController
{
public:
  ScoringAssistTwoStateSideRollingIntakeSC(void);
  ScoringAssistTwoStateSideRollingIntakeSC(SideRollingIntakeTrack*, SideRollingIntakeTrack*, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~ScoringAssistTwoStateSideRollingIntakeSC(void);

  void obey(pros::Controller);
private:
  SideRollingIntakeDefaultObey * defaultState;
  SideRollingIntakeScoringObey * scoringState;
};
#endif
