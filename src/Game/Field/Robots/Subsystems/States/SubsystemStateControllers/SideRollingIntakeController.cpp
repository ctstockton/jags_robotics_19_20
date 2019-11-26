#include "SideRollingIntakeController.h"

SideRollingIntakeController::SideRollingIntakeController(void)
{}

SideRollingIntakeController::SideRollingIntakeController(SideRollingIntakeTrack* left, SideRollingIntakeTrack* right)
{
  defaultState.setIntakeTracks(left, right);
  scoringState.setIntakeTracks(left, right);
  this->currentState = &defaultState;
}

SideRollingIntakeController::~SideRollingIntakeController(void)
{}

void SideRollingIntakeController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
    case 1: this->currentState = &this->defaultState;
      break;
    case 2: this->currentState = &this->scoringState;
      break;
  }
}
