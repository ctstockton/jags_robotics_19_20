#include "ReverseDoubleForebarLiftLowerObey.h"

ReverseDoubleForebarLiftLowerObey::ReverseDoubleForebarLiftLowerObey(void)
{}

ReverseDoubleForebarLiftLowerObey::ReverseDoubleForebarLiftLowerObey(pros::Motor* left, pros::Motor* right):
position (0)
{
  this->leftMotor = left;
  this->rightMotor = right;
}

ReverseDoubleForebarLiftLowerObey::~ReverseDoubleForebarLiftLowerObey(void)
{}

void ReverseDoubleForebarLiftLowerObey::obey(pros::Controller master)
{
  this->leftMotor->move(master.get_digital(DIGITAL_L2)*75);
  this->rightMotor->move(master.get_digital(DIGITAL_L2)*75);
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
