#include "SideRollingIntakeScoringObey.h"
#include "main.h"

SideRollingIntakeScoringObey::SideRollingIntakeScoringObey(void)
{}

SideRollingIntakeScoringObey::SideRollingIntakeScoringObey(SideRollingIntakeTrack* leftTrack, SideRollingIntakeTrack* rightTrack, pros::controller_digital_e_t changeCommandInput, int changeCommandInput2)
{
  this->leftIntakeTrack = leftTrack;
  this->rightIntakeTrack = rightTrack;
  this->changeStateCommand = changeCommandInput;
  this->returnValue = changeCommandInput2;
}

SideRollingIntakeScoringObey::~SideRollingIntakeScoringObey(void)
{}

void SideRollingIntakeScoringObey::obey(pros::Controller master)
{
  this->leftIntakeTrack->scoringObey(master);
  this->rightIntakeTrack->scoringObey(master);
}

int SideRollingIntakeScoringObey::changeState(pros::Controller master)
{
  if(master.get_digital(this->changeStateCommand)){
    return this->returnValue;
  }
  else{
    return 0;
  }
}
