#include "DriveForward.h"

DriveForward::DriveForward(void)
{}

DriveForward::DriveForward(Robot * target, int distance)
{
  this->slave = target;
  this->parameters = new int[2];
  this->parameters[0] = 1;
  this->parameters[1] = distance;
}

DriveForward::~DriveForward(void)
{
  delete this->parameters;
}

void DriveForward::execute(void)
{
  //std::cout << "driveforward is executing!" << std::endl;
  slave->driveSystem->executeCommand(this->parameters);
}
