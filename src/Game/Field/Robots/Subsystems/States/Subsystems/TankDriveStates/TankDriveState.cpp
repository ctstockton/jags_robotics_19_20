#include "TankDriveState.h"

TankDriveState::TankDriveState(void)
{}

TankDriveState::~TankDriveState(void)
{}

void TankDriveState::setDriveTracks(TankDriveTrack* left, TankDriveTrack* right)
{
  this->leftDriveTrack = left;
  this->rightDriveTrack = right;
}
