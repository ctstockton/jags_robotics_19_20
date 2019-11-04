#include "RightIntakeTrack.h"
#include "main.h"

RightIntakeTrack::RightIntakeTrack(void)
{}

RightIntakeTrack::RightIntakeTrack(int R1, pros::motor_gearset_e gear)
{
  this->rightIntakeMotor = new pros::Motor(R1, gear, true);
}

RightIntakeTrack::~RightIntakeTrack(void)
{
  delete this->rightIntakeMotor;
}

void RightIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R1)*127);
  else if(master.get_digital(DIGITAL_R2) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R2)*-127);
  else
    rightIntakeMotor->move(0);
}
