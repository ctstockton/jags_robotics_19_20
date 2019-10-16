#include "main.h"
#include "SixMotorDrive.h"

SixMotorDrive::SixMotorDrive(void)
{
  this->leftDriveTrack = new TripleLeftTrack(1, 2, 3);
  this->rightDriveTrack = new TripleRightTrack(4, 5, 6);
}

SixMotorDrive::SixMotorDrive(int L1, int L2, int L3, int R1, int R2, int R3)
{
  this->leftDriveTrack = new TripleLeftTrack(L1, L2, L3);
  this->rightDriveTrack = new TripleRightTrack(R1, R2, R3);
}

SixMotorDrive::~SixMotorDrive(void)
{
  delete this->leftDriveTrack;
  delete this->rightDriveTrack;
}

void SixMotorDrive::obey(pros::Controller master)
{
  leftDriveTrack->obey(master);
  rightDriveTrack->obey(master);
}

void SixMotorDrive::turnRight(int)
{
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void SixMotorDrive::turnLeft(int)
{}

void SixMotorDrive::driveForward(int)
{
//  leftTrack->driveForward();
//  rightTrack->driveForward();
}

void SixMotorDrive::driveBackward(int)
{}

void SixMotorDrive::orbitPointRight(int)
{}

void SixMotorDrive::orbitPointLeft(int)
{}
