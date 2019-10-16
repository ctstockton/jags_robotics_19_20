#include "SingleRightTrack.h"
#include "main.h"

SingleRightIntakeTrack::SingleRightIntakeTrack(void)
{
  this->rightMotorIntake = new pros::Motor(8);
  this->rightMotorOutput = new pros::Motor(8, true);
}

SingleRightIntakeTrack::SingleRightIntakeTrack(int R1)
{
  this->rightMotorIntake = new pros::Motor(R1);
  this->rightMotorOutput = new pros::Motor(R1, true);
}

SingleRightIntakeTrack::~SingleRightIntakeTrack(void)
{
  delete this->rightMotorIntake;
  delete this->rightMotorOutput;
}

void SingleRightIntakeTrack::obey(pros::Controller master)
{
  rightMotorIntake->move(master.get_digital(DIGITAL_R2));
  rightMotorOutput->move(master.get_digital(DIGITAL_R1));
}
