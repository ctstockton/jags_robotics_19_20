#include "SideRollingIntakeDefaultObey.h"

SideRollingIntakeDefaultObey::SideRollingIntakeDefaultObey(void)
{}

SideRollingIntakeDefaultObey::SideRollingIntakeDefaultObey(SideRollingIntakeTrack* leftTrack, SideRollingIntakeTrack* rightTrack, pros::controller_digital_e_t changeCommandInput, int changeCommandInput2)
{
  this->leftIntakeTrack = leftTrack;
  this->rightIntakeTrack = rightTrack;
  this->changeStateCommand = changeCommandInput;
  this->returnValue = changeCommandInput2;
}

SideRollingIntakeDefaultObey::~SideRollingIntakeDefaultObey(void)
{}

void SideRollingIntakeDefaultObey::obey(pros::Controller master)
{
  this->leftIntakeTrack->obey(master);
  this->rightIntakeTrack->obey(master);
}

int SideRollingIntakeDefaultObey::changeState(pros::Controller master)
{
  if(master.get_digital(this->changeStateCommand)){
    return this->returnValue;
  }
  else{
    return 0;
  }
}
