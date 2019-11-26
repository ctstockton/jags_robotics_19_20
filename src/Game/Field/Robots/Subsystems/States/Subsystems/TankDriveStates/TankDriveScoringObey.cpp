#include "TankDriveScoringObey.h"

TankDriveScoringObey::TankDriveScoringObey(void)
{}

TankDriveScoringObey::~TankDriveScoringObey(void)
{}

void TankDriveScoringObey::obey(pros::Controller master)
{
  this->leftDriveTrack->scoringObey(master);
  this->rightDriveTrack->scoringObey(master);
}

int TankDriveScoringObey::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_UP)){
    return 1;
  }
  else{
    return 0;
  }
}
