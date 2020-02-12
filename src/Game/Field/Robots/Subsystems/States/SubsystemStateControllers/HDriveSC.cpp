#include "HDriveSC.h"

HDriveSC::HDriveSC(void)
{}

HDriveSC::HDriveSC(TankDriveTrack* left, TankDriveTrack* right, HDriveTrack* h):
defaultObey (new HDriveDefaultObey(left, right, h))
{
  this->currentState = defaultObey;
}

HDriveSC::~HDriveSC(void)
{
  delete defaultObey;
}

void HDriveSC::obey(pros::Controller master)
{
  this->currentState->obey(master);
}
