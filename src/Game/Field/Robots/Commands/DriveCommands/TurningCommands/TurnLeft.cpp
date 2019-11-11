#include "TurnLeft.h"

TurnLeft::TurnLeft(void)
{}

TurnLeft::TurnLeft(Robot * target, int degrees)
{
  this->slave = target;
  parameters = new int[2];
  this->parameters[0] = 4;
  this->parameters[1] = degrees;
}

TurnLeft::~TurnLeft(void)
{}

void TurnLeft::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
