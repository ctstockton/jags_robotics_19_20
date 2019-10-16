#include "DriveBackward.h"

DriveBackward::DriveBackward(void)
{}

DriveBackward::DriveBackward(Robot * target, int distance)
{
this->slave = target;
this->parameter1 = distance;
}

DriveBackward::~DriveBackward(void)
{}

void DriveBackward::execute(void)
{
  slave->driveSystem->driveBackward(this->parameter1);
}
