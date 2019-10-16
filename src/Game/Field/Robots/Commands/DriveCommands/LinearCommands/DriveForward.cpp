#include "DriveForward.h"

DriveForward::DriveForward(void)
{}

DriveForward::DriveForward(Robot * target, int distance)
{
this->slave = target;
this->parameter1 = distance;
}

DriveForward::~DriveForward(void)
{}

void DriveForward::execute(void)
{
  slave->driveSystem->driveForward(this->parameter1);
}
