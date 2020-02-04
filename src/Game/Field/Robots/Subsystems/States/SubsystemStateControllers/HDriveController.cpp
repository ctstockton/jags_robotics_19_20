#include "HDriveController.h"

HDriveController::HDriveController(void)
{}

HDriveController::HDriveController(TankDriveTrack* left, TankDriveTrack* right, HDriveTrack* h):
defaultObey (new HDriveDefaultObey(left, right, h))
{
  this->currentState = defaultObey;
}

HDriveController::~HDriveController(void)
{
  delete defaultObey;
}

void HDriveController::obey(pros::Controller master)
{
  this->currentState->obey(master);
}
