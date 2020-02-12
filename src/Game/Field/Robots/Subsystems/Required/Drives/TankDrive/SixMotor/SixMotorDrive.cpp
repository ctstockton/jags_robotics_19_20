#include "main.h"
#include "SixMotorDrive.h"

SixMotorDrive::SixMotorDrive(void)
{}

SixMotorDrive::SixMotorDrive(RobotDetails* details)
{
  this->leftDriveTrack = new TripleLeftTrack(details->getLeftDriveMotor1(), details->getLeftDriveMotor2(), details->getLeftDriveMotor3(), details->getDriveGearset());
  this->rightDriveTrack = new TripleRightTrack(details->getRightDriveMotor1(), details->getRightDriveMotor2(), details->getRightDriveMotor3(), details->getDriveGearset());
  this->stateController = new TankDriveSC(this->leftDriveTrack, this->rightDriveTrack);
  this->driveConstant = details->getDriveGearset();
}

SixMotorDrive::~SixMotorDrive(void)
{
  delete this->leftDriveTrack;
  delete this->rightDriveTrack;
  delete this->stateController;
}

void SixMotorDrive::obey(pros::Controller master)
{
  this->stateController->obey(master);
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
