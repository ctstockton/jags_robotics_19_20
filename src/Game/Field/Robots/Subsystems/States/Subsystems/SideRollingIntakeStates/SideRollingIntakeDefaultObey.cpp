#include "SideRollingIntakeDefaultObey.h"

SideRollingIntakeDefaultObey::SideRollingIntakeDefaultObey(void)
{}

SideRollingIntakeDefaultObey::~SideRollingIntakeDefaultObey(void)
{}

void SideRollingIntakeDefaultObey::obey(pros::Controller master)
{
  this->leftIntakeTrack->obey(master);
  this->rightIntakeTrack->obey(master);
}

int SideRollingIntakeDefaultObey::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_DOWN)){
    return 2;
  }
  else{
    return 0;
  }
}
