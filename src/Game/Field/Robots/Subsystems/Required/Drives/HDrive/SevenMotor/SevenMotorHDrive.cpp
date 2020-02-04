#include "SevenMotorHDrive.h"

SevenMotorHDrive::SevenMotorHDrive(void)
{}

SevenMotorHDrive::SevenMotorHDrive(RobotDetails* details)
{
  this->leftDriveTrack = new TripleLeftTrack(details->getLeftDriveMotor1(), details->getLeftDriveMotor2(), details->getLeftDriveMotor3(), details->getDriveGearset());
  this->rightDriveTrack = new TripleRightTrack(details->getRightDriveMotor1(), details->getRightDriveMotor2(), details->getRightDriveMotor3(), details->getDriveGearset());
  this->hDriveTrack = new SingleHTrack(details->getHDriveMotor1(), details->getDriveGearset());
  this->stateController = new HDriveController(this->leftDriveTrack, this->rightDriveTrack, this->hDriveTrack);
  this->driveConstant = details->getDriveConstant();
}

SevenMotorHDrive::~SevenMotorHDrive(void)
{
  delete this->leftDriveTrack;
  delete this->rightDriveTrack;
  delete this->stateController;
  delete this->hDriveTrack;
}

void SevenMotorHDrive::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

void SevenMotorHDrive::executeCommand(int * input)
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
    case 4: strafeLeft(input[1]);
    break;
    case 5: strafeRight(input[1]);
    break;
    case 6: turnLeft(input[1]);
    break;
    case 7: turnRight(input[1]);
    break;
  }
}

void SevenMotorHDrive::driveBackward(int)
{}

void SevenMotorHDrive::driveForward(int)
{}

void SevenMotorHDrive::orbitPointLeft(int)
{}

void SevenMotorHDrive::orbitPointRight(int)
{}

void SevenMotorHDrive::strafeLeft(int)
{}

void SevenMotorHDrive::strafeRight(int)
{}

void SevenMotorHDrive::turnLeft(int)
{}

void SevenMotorHDrive::turnRight(int)
{}
