#include "SingleLeftTrack.h"
#include "main.h"

SingleLeftIntakeTrack::SingleLeftIntakeTrack(void)
{}

SingleLeftIntakeTrack::SingleLeftIntakeTrack(int L1, pros::motor_gearset_e gear)
{
  this->leftIntakeMotor = new pros::Motor(L1, gear);
  this->leftIntakeMotor->tare_position();
}

SingleLeftIntakeTrack::~SingleLeftIntakeTrack(void)
{
  delete this->leftIntakeMotor;
}

void SingleLeftIntakeTrack::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_R1) == 1){
    leftIntakeMotor->move(master.get_digital(DIGITAL_R1)*127);
    leftIntakeMotor->tare_position();
  }
  else if(master.get_digital(DIGITAL_R2) == 1){
    leftIntakeMotor->move(master.get_digital(DIGITAL_R2)*-127);
    leftIntakeMotor->tare_position();
  }
  else{
    leftIntakeMotor->move(0);
  }
}

void SingleLeftIntakeTrack::scoringObey(pros::Controller master)
{
    leftIntakeMotor->move(master.get_analog(ANALOG_RIGHT_Y)*sqrt(2));
}
