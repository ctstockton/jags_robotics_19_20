#include "ReverseDoubleForebarLiftDefaultObey.h"

ReverseDoubleForebarLiftDefaultObey::ReverseDoubleForebarLiftDefaultObey(void)
{}

ReverseDoubleForebarLiftDefaultObey::~ReverseDoubleForebarLiftDefaultObey(void)
{}

void ReverseDoubleForebarLiftDefaultObey::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_L1) == 1)
  {
    this->leftMotor->move(master.get_digital(DIGITAL_L1)*-85);
    this->leftMotor->tare_position();
    this->rightMotor->move(master.get_digital(DIGITAL_L1)*-85);
    this->rightMotor->tare_position();
  }
  else if(master.get_digital(DIGITAL_L2) == 1)
  {
    this->leftMotor->move(master.get_digital(DIGITAL_L2)*75);
    this->leftMotor->tare_position();
    this->rightMotor->move(master.get_digital(DIGITAL_L2)*75);
    this->rightMotor->tare_position();
  }
  else
  {
    this->leftMotor->move_absolute(0, 100);
    this->rightMotor->move_absolute(0, 100);
  }
}

int ReverseDoubleForebarLiftDefaultObey::changeState(pros::Controller)
{
  return 0;
}
