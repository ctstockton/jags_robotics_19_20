#include "SingleRightTrack.h"
#include "main.h"

SingleRightIntakeTrack::SingleRightIntakeTrack(void)
{}

SingleRightIntakeTrack::SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear)
{
  this->rightMotorIntake = new pros::Motor(R1, gear);
  this->rightMotorOutput = new pros::Motor(R1, gear, true);
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
