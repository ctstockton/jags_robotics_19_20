#include "SingleLeftTrack.h"
#include "main.h"

SingleLeftIntakeTrack::SingleLeftIntakeTrack(void)
{
  this->leftMotorIntake = new pros::Motor(7);
  this->leftMotorOutput = new pros::Motor(7, true);
}

SingleLeftIntakeTrack::SingleLeftIntakeTrack(int L1)
{
  this->leftMotorIntake = new pros::Motor(L1);
  this->leftMotorOutput = new pros::Motor(L1, true);
}

SingleLeftIntakeTrack::~SingleLeftIntakeTrack(void)
{
  delete this->leftMotorIntake;
  delete this->leftMotorOutput;
}

void SingleLeftIntakeTrack::obey(pros::Controller master)
{
  leftMotorIntake->move(master.get_digital(DIGITAL_R2));
  leftMotorOutput->move(master.get_digital(DIGITAL_R1));
}
