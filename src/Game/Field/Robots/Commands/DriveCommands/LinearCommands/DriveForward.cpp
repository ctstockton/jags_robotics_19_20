#include "DriveForward.h"

DriveForward::DriveForward(void)
{}

DriveForward::DriveForward(CommandTarget target, int distance)
{
this->slave = target;
this->parameter1 = distance;
}

DriveForward::~DriveForward(void)
{}

void DriveForward::execute(void)
{
  slave.target->driveSystem->driveForward(this->parameter1);
}
