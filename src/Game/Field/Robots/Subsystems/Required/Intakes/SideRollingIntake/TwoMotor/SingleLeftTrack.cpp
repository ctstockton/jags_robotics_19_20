#include "SingleLeftTrack.h"
#include "main.h"

SingleLeftIntakeTrack::SingleLeftIntakeTrack(void)
{}

SingleLeftIntakeTrack::SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear)
{
  this->leftMotorIntake = new pros::Motor(L1, gear);
  this->leftMotorOutput = new pros::Motor(L1, gear, true);
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
