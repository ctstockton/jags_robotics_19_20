#include "TankDriveDefaultObey.h"

TankDriveDefaultObey::TankDriveDefaultObey(void)
{}

TankDriveDefaultObey::~TankDriveDefaultObey(void)
{}

void TankDriveDefaultObey::obey(pros::Controller master)
{
  this->leftDriveTrack->obey(master);
  this->rightDriveTrack->obey(master);
}

int TankDriveDefaultObey::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_DOWN)){
    return 2;
  }
  else{
    return 0;
  }
}
