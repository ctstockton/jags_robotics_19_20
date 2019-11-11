#include "DriveForward.h"

DriveForward::DriveForward(void)
{}

DriveForward::DriveForward(Robot * target, int distance)
{
  this->slave = target;
  parameters = new int[2];
  this->parameters[0] = 1;
  this->parameters[1] = distance;
}

DriveForward::~DriveForward(void)
{}

void DriveForward::execute(void)
{
  slave->driveSystem->executeCommand(this->parameters);
}
