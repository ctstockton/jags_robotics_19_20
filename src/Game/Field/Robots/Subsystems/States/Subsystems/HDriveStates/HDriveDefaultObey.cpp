#include "HDriveDefaultObey.h"

HDriveDefaultObey::HDriveDefaultObey(void)
{}

HDriveDefaultObey::HDriveDefaultObey(TankDriveTrack* left, TankDriveTrack* right, HDriveTrack* h)
{
  this->leftDriveTrack = left;
  this->rightDriveTrack = right;
  this->hDriveTrack = h;
}

HDriveDefaultObey::~HDriveDefaultObey(void)
{}

void HDriveDefaultObey::obey(pros::Controller master)
{
  this->leftDriveTrack->obey(master);
  this->rightDriveTrack->obey(master);
  this->hDriveTrack->obey(master);
}

int HDriveDefaultObey::changeState(pros::Controller master)
{
  return 0;
}
