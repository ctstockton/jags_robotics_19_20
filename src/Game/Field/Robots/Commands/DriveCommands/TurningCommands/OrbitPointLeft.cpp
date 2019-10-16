#include "OrbitPointLeft.h"

OrbitPointLeft::OrbitPointLeft(void)
{}

OrbitPointLeft::OrbitPointLeft(Robot * target, int degrees)
{
  this->slave = target;
  this->parameter1 = degrees;
}

OrbitPointLeft::~OrbitPointLeft(void)
{}

void OrbitPointLeft::execute(void)
{
  slave->driveSystem->orbitPointLeft(this->parameter1);
}
