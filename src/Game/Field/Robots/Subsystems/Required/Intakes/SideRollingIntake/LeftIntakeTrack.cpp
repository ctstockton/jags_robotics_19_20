#include "LeftIntakeTrack.h"
#include "main.h"

LeftIntakeTrack::LeftIntakeTrack(void)
{}

LeftIntakeTrack::LeftIntakeTrack(int L1, pros::motor_gearset_e gear)
{
  this->leftIntakeMotor = new pros::Motor(L1, gear);
}

LeftIntakeTrack::~LeftIntakeTrack(void)
{
  delete this->leftIntakeMotor;
}

void LeftIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1)
    leftIntakeMotor->move(master.get_digital(DIGITAL_R1)*127);
  else if(master.get_digital(DIGITAL_R2) == 1)
    leftIntakeMotor->move(master.get_digital(DIGITAL_R2)*-127);
  else
    leftIntakeMotor->move(0);
}
