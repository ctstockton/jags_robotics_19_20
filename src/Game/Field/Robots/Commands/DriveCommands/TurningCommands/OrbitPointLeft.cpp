#include "OrbitPointLeft.h"

OrbitPointLeft::OrbitPointLeft(void)
{}

OrbitPointLeft::OrbitPointLeft(Robot * target, int degrees)
{
  this->slave = target;
  parameters = new int[2];
  this->parameters[0] = 2;
  this->parameters[1] = degrees;
}

OrbitPointLeft::~OrbitPointLeft(void)
{
  delete parameters;
}

void OrbitPointLeft::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
