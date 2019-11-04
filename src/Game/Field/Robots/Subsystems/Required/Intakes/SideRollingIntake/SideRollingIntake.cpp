#include "SideRollingIntake.h"
#include "main.h"

SideRollingIntake::SideRollingIntake(void)
{}

SideRollingIntake::SideRollingIntake(int L1, int R1, pros::motor_gearset_e gear)
{
  this->leftIntakeTrack = new LeftIntakeTrack(L1, gear);
  this->rightIntakeTrack = new RightIntakeTrack(R1, gear);
}

SideRollingIntake::~SideRollingIntake(void)
{}

void SideRollingIntake::obey(pros::Controller master)
{
  this->rightIntakeTrack->obey(master);
  this->leftIntakeTrack->obey(master);

}
