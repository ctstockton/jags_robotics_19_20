#include "TankDriveSC.h"

TankDriveSC::TankDriveSC(void)
{}

TankDriveSC::TankDriveSC(TankDriveTrack* left, TankDriveTrack* right)
{
  this->defaultState.setDriveTracks(left, right);
  this->scoringState.setDriveTracks(left, right);
  this->currentState = &this->defaultState;
}

TankDriveSC::~TankDriveSC(void)
{}

void TankDriveSC::obey(pros::Controller master)
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
