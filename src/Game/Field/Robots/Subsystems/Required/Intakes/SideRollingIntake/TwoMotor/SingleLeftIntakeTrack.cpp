#include "SingleLeftIntakeTrack.h"
#include "main.h"

SingleLeftIntakeTrack::SingleLeftIntakeTrack(void)
{}

SingleLeftIntakeTrack::SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear)
{
  this->leftIntakeMotor = new pros::Motor(L1, gear);
  this->leftIntakeMotor->tare_position();
  this->in = 127;
  this->out = -127;
}

SingleLeftIntakeTrack::SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear, int in, int out)
{
  this->leftIntakeMotor = new pros::Motor(L1, gear);
  this->leftIntakeMotor->tare_position();
  this->in = in;
  this->out = out;
}

SingleLeftIntakeTrack::~SingleLeftIntakeTrack(void)
{
  delete this->leftIntakeMotor;
}

void SingleLeftIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1){
    this->leftIntakeMotor->move(master.get_digital(DIGITAL_R1)*this->in);
    this->leftIntakeMotor->tare_position();
  }
  else if(master.get_digital(DIGITAL_R2) == 1){
    this->leftIntakeMotor->move(master.get_digital(DIGITAL_R2)*this->out);
    this->leftIntakeMotor->tare_position();
  }
  else{
    this->leftIntakeMotor->move(0);
  }
}

void SingleLeftIntakeTrack::scoringObey(pros::Controller master)
{
    this->leftIntakeMotor->move(master.get_analog(ANALOG_RIGHT_Y)*1.75);
}
