#include "DriveBackward.h"

DriveBackward::DriveBackward(void)
{}

DriveBackward::DriveBackward(Robot * target, int distance)
{
this->slave = target;
this->parameter1 = distance;
std::cout << "drivebackward command is created\n";
}

DriveBackward::~DriveBackward(void)
{}

void DriveBackward::execute(void)
{
  std::cout << "drive backward command being execute\n";
  slave->driveSystem->driveBackward(this->parameter1);
}
