#include "SideRollingIntake.h"
#include "main.h"

SideRollingIntake::SideRollingIntake(void)
{
  this->leftIntakeTrack = new LeftIntakeTrack(11);
  this->rightIntakeTrack = new RightIntakeTrack(12);
}

SideRollingIntake::SideRollingIntake(int L1, int R1)
{
  this->leftIntakeTrack = new LeftIntakeTrack(L1);
  this->rightIntakeTrack = new RightIntakeTrack(R1);
}

SideRollingIntake::~SideRollingIntake(void)
{}

void SideRollingIntake::obey(pros::Controller master)
{
  this->leftIntakeTrack->obey(master);
  this->rightIntakeTrack->obey(master);
}
