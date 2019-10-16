#include "TurnRight.h"

TurnRight::TurnRight(void)
{}

TurnRight::TurnRight(Robot * target, int degrees)
{
  this->slave = target;
  this->parameter1 = degrees;
}

TurnRight::~TurnRight(void)
{}

void TurnRight::execute(void)
{
  slave->driveSystem->turnRight(this->parameter1);
}
