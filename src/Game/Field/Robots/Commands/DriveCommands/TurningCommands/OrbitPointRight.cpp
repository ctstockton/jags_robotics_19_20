#include "OrbitPointRight.h"

OrbitPointRight::OrbitPointRight(void)
{}

OrbitPointRight::OrbitPointRight(CommandTarget target, int degrees)
{
  this->slave = target;
  this->parameter1 = degrees;
}

OrbitPointRight::~OrbitPointRight(void)
{}

void OrbitPointRight::execute(void)
{
  slave.target->driveSystem->orbitPointRight(this->parameter1);
}
