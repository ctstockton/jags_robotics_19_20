#include "OrbitPointRight.h"

OrbitPointRight::OrbitPointRight(void)
{}

OrbitPointRight::OrbitPointRight(Robot * target, int degrees)
{
  this->slave = target;
  parameters = new int[2];
  this->parameters[0] = 3;
  this->parameters[1] = degrees;
}

OrbitPointRight::~OrbitPointRight(void)
{}

void OrbitPointRight::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
