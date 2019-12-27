#include "MonobarLiftReturnToRestingZero.h"

MonobarLiftReturnToRestingZero::MonobarLiftReturnToRestingZero(void)
{}

MonobarLiftReturnToRestingZero::MonobarLiftReturnToRestingZero(pros::Motor* left, pros::Motor* right, int input1, int input2)
{
  this->leftMotor = left;
  this->rightMotor = right;
  this->position = input1;
  this->speed = input2;
}

MonobarLiftReturnToRestingZero::~MonobarLiftReturnToRestingZero(void)
{}

void MonobarLiftReturnToRestingZero::obey(pros::Controller master)
{
  if(this->leftMotor->get_position() > input1 || this->leftmotor->getPosition() < -input1){
    this->leftMotor->move_absolute(0, speed);
    this->rightMotor->move_absolute(0, speed);
  }
}

int MonobarLiftReturnToRestingZero::changeState(pros::Controller master)
{
  return 0;
}
