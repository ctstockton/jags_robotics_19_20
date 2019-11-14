#include "SingleRightTrack.h"
#include "main.h"

SingleRightIntakeTrack::SingleRightIntakeTrack(void)
{}

SingleRightIntakeTrack::SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear)
{
  this->rightIntakeMotor = new pros::Motor(R1, gear, true);
  this->rightIntakeMotor->tare_position();
}

SingleRightIntakeTrack::~SingleRightIntakeTrack(void)
{
  delete this->rightIntakeMotor;
}

void SingleRightIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R1)*127);
  else if(master.get_digital(DIGITAL_R2) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R2)*-127);
  else
    rightIntakeMotor->move(0);
}

void SingleRightIntakeTrack::scoringObey(pros::Controller master)
{
    rightIntakeMotor->move(master.get_analog(ANALOG_RIGHT_Y)*sqrt(2));
}
