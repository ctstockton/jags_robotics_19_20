#include "MonobarLiftMoveToPosition.h"

MonobarLiftMoveToPosition::MonobarLiftMoveToPosition(void)
{}

MonobarLiftMoveToPosition::MonobarLiftMoveToPosition(pros::Motor* left, pros::Motor* right, int input1, int input2)
{
  this->leftMotor = left;
  this->rightMotor = right;
  this->position = input1;
  this->speed = input2;
}

MonobarLiftMoveToPosition::~MonobarLiftMoveToPosition(void)
{}

void MonobarLiftMoveToPosition::obey(pros::Controller master)
{
  this->leftMotor->move_absolute(this->position, this->speed);
  this->rightMotor->move_absolute(this->position, this->speed);
}

int MonobarLiftMoveToPosition::changeState(pros::Controller master)
{
  return 0;
}
