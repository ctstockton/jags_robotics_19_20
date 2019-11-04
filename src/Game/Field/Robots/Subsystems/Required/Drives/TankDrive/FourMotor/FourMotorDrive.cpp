#include "main.h"
#include "FourMotorDrive.h"

FourMotorDrive::FourMotorDrive(void)
{}

FourMotorDrive::FourMotorDrive(int L1, int L2, int R1, int R2, pros::motor_gearset_e gear)
{
  this->leftDriveTrack = new DoubleLeftTrack(L1, L2, gear);
  this->rightDriveTrack = new DoubleRightTrack(R1, R2, gear);
}

FourMotorDrive::~FourMotorDrive(void)
{
  delete this->leftDriveTrack;
  delete this->rightDriveTrack;
}

void FourMotorDrive::obey(pros::Controller master)
{
  leftDriveTrack->obey(master);
  rightDriveTrack->obey(master);
}

void FourMotorDrive::turnRight(int)
{
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void FourMotorDrive::turnLeft(int)
{}

void FourMotorDrive::driveForward(int)
{
//  leftTrack->driveForward();
//  rightTrack->driveForward();
}

void FourMotorDrive::driveBackward(int)
{}

void FourMotorDrive::orbitPointRight(int)
{}

void FourMotorDrive::orbitPointLeft(int)
{}
