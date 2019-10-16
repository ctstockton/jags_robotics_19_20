#include "TurnLeft.h"

TurnLeft::TurnLeft(void)
{}

TurnLeft::TurnLeft(CommandTarget target, int degrees)
{
  this->slave = target;
  this->parameter1 = degrees;
}

TurnLeft::~TurnLeft(void)
{}

void TurnLeft::execute(void)
{
  slave.target->driveSystem->turnLeft(this->parameter1);
}
