#include "TurnRight.h"

TurnRight::TurnRight(void)
{}

TurnRight::TurnRight(Robot * target, int degrees)
{
  this->slave = target;
  parameters = new int[2];
  this->parameters[0] = 5;
  this->parameters[1] = degrees;
}

TurnRight::~TurnRight(void)
{}

void TurnRight::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
