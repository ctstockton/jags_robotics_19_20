#include "ReverseDoubleForebarLiftRaiseObey.h"

ReverseDoubleForebarLiftRaiseObey::ReverseDoubleForebarLiftRaiseObey(void)
{}

ReverseDoubleForebarLiftRaiseObey::ReverseDoubleForebarLiftRaiseObey(pros::Motor* left, pros::Motor* right):
position (0)
{
  this->leftMotor = left;
  this->rightMotor = right;
}

ReverseDoubleForebarLiftRaiseObey::~ReverseDoubleForebarLiftRaiseObey(void)
{}

void ReverseDoubleForebarLiftRaiseObey::obey(pros::Controller master)
{
  this->leftMotor->move(master.get_digital(DIGITAL_L1)*-85);
  this->rightMotor->move(master.get_digital(DIGITAL_L1)*-85);
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
