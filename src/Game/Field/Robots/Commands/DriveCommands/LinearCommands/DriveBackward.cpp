#include "DriveBackward.h"

DriveBackward::DriveBackward(void)
{}

DriveBackward::DriveBackward(Robot * target, int distance)
{
  this->slave = target;
  this->parameters = new int[2];
  this->parameters[0] = 0;
  this->parameters[1] = distance;
}

DriveBackward::~DriveBackward(void)
{
  delete this->parameters;
}

void DriveBackward::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
