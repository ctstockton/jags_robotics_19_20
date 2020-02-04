#include "ReverseDoubleForebarLiftDefaultObey.h"

ReverseDoubleForebarLiftDefaultObey::ReverseDoubleForebarLiftDefaultObey(void)
{}

ReverseDoubleForebarLiftDefaultObey::ReverseDoubleForebarLiftDefaultObey(pros::Motor* left, pros::Motor* right, int relaxLimit):
position (0),
limit (relaxLimit)
{
  this->leftMotor = left;
  this->rightMotor = right;
}

ReverseDoubleForebarLiftDefaultObey::~ReverseDoubleForebarLiftDefaultObey(void)
{}

void ReverseDoubleForebarLiftDefaultObey::obey(pros::Controller master)
{
  if((position < -limit) || (position > limit)){
    this->leftMotor->move_absolute(position, 100);
    this->rightMotor->move_absolute(position, 100);
  }
}

int ReverseDoubleForebarLiftDefaultObey::changeState(pros::Controller master)
{
  return position;
}

void ReverseDoubleForebarLiftDefaultObey::setPosition(int input)
{
  position = input;
}

int ReverseDoubleForebarLiftDefaultObey::getPosition(void)
{
  return position;
}
