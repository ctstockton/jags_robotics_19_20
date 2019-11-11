#include "TwoMotorIntake.h"
#include "main.h"

TwoMotorIntake::TwoMotorIntake(void)
{}

TwoMotorIntake::TwoMotorIntake(int L1, int R1, pros::motor_gearset_e gear)
{
  this->leftIntakeTrack = new SingleLeftIntakeTrack(L1, gear);
  this->rightIntakeTrack = new SingleRightIntakeTrack(R1, gear);
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

void TwoMotorIntake::executeCommand(int * input)
{}
