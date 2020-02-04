#include "ReverseDoubleForebarLiftRaiseObey.h"

ReverseDoubleForebarLiftRaiseObey::ReverseDoubleForebarLiftRaiseObey(void)
{}

ReverseDoubleForebarLiftRaiseObey::ReverseDoubleForebarLiftRaiseObey(pros::Motor* left, pros::Motor* right, int speed, pros::controller_digital_e_t raise):
position (0),
control (raise),
raiseSpeed (speed)
{
  this->leftMotor = left;
  this->rightMotor = right;
}

ReverseDoubleForebarLiftRaiseObey::~ReverseDoubleForebarLiftRaiseObey(void)
{}

void ReverseDoubleForebarLiftRaiseObey::obey(pros::Controller master)
{
  this->leftMotor->move(master.get_digital(control)*-raiseSpeed);
  this->rightMotor->move(master.get_digital(control)*-raiseSpeed);
  position = this->leftMotor->get_position();
}

int ReverseDoubleForebarLiftRaiseObey::changeState(pros::Controller master)
{
  return position;
}

void ReverseDoubleForebarLiftRaiseObey::setPosition(int input)
{
  position = input;
}

int ReverseDoubleForebarLiftRaiseObey::getPosition(void)
{
  return position;
}
