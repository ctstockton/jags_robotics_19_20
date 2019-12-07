#include "SingleRightTrack.h"
#include "main.h"

SingleRightIntakeTrack::SingleRightIntakeTrack(void)
{}

SingleRightIntakeTrack::SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear)
{
  this->rightIntakeMotor = new pros::Motor(R1, gear, true);
  this->rightIntakeMotor->tare_position();
  this->in = 127;
  this->out = -127;
}

SingleRightIntakeTrack::SingleRightIntakeTrack(int R1, pros::motor_gearset_e gear, int in, int out)
{
  this->rightIntakeMotor = new pros::Motor(R1, gear, true);
  this->rightIntakeMotor->tare_position();
  this->in = in;
  this->out = out;
}

SingleRightIntakeTrack::~SingleRightIntakeTrack(void)
{
  delete this->rightIntakeMotor;
}

void SingleRightIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R1)*this->in);
  else if(master.get_digital(DIGITAL_R2) == 1)
    rightIntakeMotor->move(master.get_digital(DIGITAL_R2)*this->out);
  else
    rightIntakeMotor->move(0);
}

void SingleRightIntakeTrack::scoringObey(pros::Controller master)
{
    rightIntakeMotor->move(master.get_analog(ANALOG_RIGHT_Y)*1.75);
}
