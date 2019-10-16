#include "DriveBackward.h"

DriveBackward::DriveBackward(void)
{}

DriveBackward::DriveBackward(CommandTarget target, int distance)
{
this->slave = target;
this->parameter1 = distance;
}

DriveBackward::~DriveBackward(void)
{}

void DriveBackward::execute(void)
{
  slave.target->driveSystem->driveBackward(this->parameter1);
}
