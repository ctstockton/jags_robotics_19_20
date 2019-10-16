#include "TurnRight.h"

TurnRight::TurnRight(void)
{}

TurnRight::TurnRight(CommandTarget target, int degrees)
{
  this->slave = target;
  this->parameter1 = degrees;
}

TurnRight::~TurnRight(void)
{}

void TurnRight::execute(void)
{
  slave.target->driveSystem->turnRight(this->parameter1);
}
