#include "DriveBackward.h"

DriveBackward::DriveBackward(void)
{}

DriveBackward::DriveBackward(Robot * target, int distance)
{
this->slave = target;
parameters = new int[2];
parameters[0] = 0;
parameters[1] = distance;
std::cout << "drivebackward command is created\n";
}

DriveBackward::~DriveBackward(void)
{}

void DriveBackward::execute(void)
{
  std::cout << "drive backward command being execute\n";
  slave->driveSystem->executeCommand(this->parameters);
}
