#include "SideRollingIntakeScoringObey.h"
#include "main.h"

SideRollingIntakeScoringObey::SideRollingIntakeScoringObey(void)
{}

SideRollingIntakeScoringObey::~SideRollingIntakeScoringObey(void)
{}

void SideRollingIntakeScoringObey::obey(pros::Controller master)
{
  this->leftIntakeTrack->scoringObey(master);
  this->rightIntakeTrack->scoringObey(master);
}

int SideRollingIntakeScoringObey::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_UP)){
    return 1;
  }
  else{
    return 0;
  }
}
