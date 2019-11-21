#include "main.h"
#include "SixMotorDrive.h"

SixMotorDrive::SixMotorDrive(void)
{}

SixMotorDrive::SixMotorDrive(int L1, int L2, int L3, int R1, int R2, int R3, pros::motor_gearset_e gear, float driveConstant)
{
  this->leftDriveTrack = new TripleLeftTrack(L1, L2, L3, gear);
  this->rightDriveTrack = new TripleRightTrack(R1, R2, R3, gear);
  this->driveConstant = driveConstant;
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

void SixMotorDrive::executeCommand(int * input)
{
  switch (input[0]){
    case 0: driveBackward(input[1]);
    break;
    case 1: driveForward(input[1]);
    break;
    case 2: orbitPointLeft(input[1]);
    break;
    case 3: orbitPointRight(input[1]);
    break;
    case 4: turnLeft(input[1]);
    break;
    case 5: turnRight(input[1]);
    break;
  }
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
