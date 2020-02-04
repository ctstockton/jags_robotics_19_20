#include "ScoringAssistTwoStateSideRollingIntakeSC.h"

ScoringAssistTwoStateSideRollingIntakeSC::ScoringAssistTwoStateSideRollingIntakeSC(void)
{}

ScoringAssistTwoStateSideRollingIntakeSC::ScoringAssistTwoStateSideRollingIntakeSC(SideRollingIntakeTrack* left, SideRollingIntakeTrack* right, pros::controller_digital_e_t command1, pros::controller_digital_e_t command2):
defaultState (new SideRollingIntakeDefaultObey(left, right, command1, 1)),
scoringState (new SideRollingIntakeScoringObey(left, right, command2, 2))
{
  this->currentState = defaultState;
}

ScoringAssistTwoStateSideRollingIntakeSC::~ScoringAssistTwoStateSideRollingIntakeSC(void)
{
  delete defaultState;
  delete scoringState;
}

void ScoringAssistTwoStateSideRollingIntakeSC::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
    case 1: this->currentState = this->defaultState;
      break;
    case 2: this->currentState = this->scoringState;
      break;
  }
}
