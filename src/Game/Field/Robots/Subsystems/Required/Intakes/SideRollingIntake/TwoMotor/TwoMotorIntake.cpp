#include "TwoMotorIntake.h"
#include "main.h"

TwoMotorIntake::TwoMotorIntake(void)
{
  this->leftIntakeTrack = new SingleLeftIntakeTrack(7);
  this->rightIntakeTrack = new SingleRightIntakeTrack(8);
}

TwoMotorIntake::TwoMotorIntake(int L1, int R1)
{
  this->leftIntakeTrack = new SingleLeftIntakeTrack(L1);
  this->rightIntakeTrack = new SingleRightIntakeTrack(R1);
}

TwoMotorIntake::~TwoMotorIntake(void)
{
  delete this->leftIntakeTrack;
  delete this->rightIntakeTrack;
}

void TwoMotorIntake::obey(pros::Controller master)
{
  leftIntakeTrack->obey(master);
  rightIntakeTrack->obey(master);
}
