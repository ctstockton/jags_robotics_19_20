#include "ReverseDoubleForebarLiftLowerObey.h"

ReverseDoubleForebarLiftLowerObey::ReverseDoubleForebarLiftLowerObey(void)
{}

ReverseDoubleForebarLiftLowerObey::ReverseDoubleForebarLiftLowerObey(pros::Motor* left, pros::Motor* right, int speed, pros::controller_digital_e_t lower):
position (0),
control (lower),
lowerSpeed (speed)
{
  this->leftMotor = left;
  this->rightMotor = right;
}

ReverseDoubleForebarLiftLowerObey::~ReverseDoubleForebarLiftLowerObey(void)
{}

void ReverseDoubleForebarLiftLowerObey::obey(pros::Controller master)
{
  this->leftMotor->move(master.get_digital(control)*lowerSpeed);
  this->rightMotor->move(master.get_digital(control)*lowerSpeed);
  position = this->leftMotor->get_position();
}

int ReverseDoubleForebarLiftLowerObey::changeState(pros::Controller master)
{
  return position;
}

void ReverseDoubleForebarLiftLowerObey::setPosition(int input)
{
  position = input;
}

int ReverseDoubleForebarLiftLowerObey::getPosition(void)
{
  return position;
}
