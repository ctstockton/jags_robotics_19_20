#include "main.h"
#include "FourMotorDrive.h"

FourMotorDrive::FourMotorDrive(void)
{}

FourMotorDrive::FourMotorDrive(RobotDetails * details)
{
  this->leftDriveTrack = new DoubleLeftTrack(details->getLeftDriveMotor1(), details->getLeftDriveMotor2(), details->getDriveGearset());
  this->rightDriveTrack = new DoubleRightTrack(details->getRightDriveMotor1(), details->getRightDriveMotor2(), details->getDriveGearset());
  this->stateController = new TankDriveSC(this->leftDriveTrack, this->rightDriveTrack);
  this->driveConstant = details->getDriveConstant();
  this->turnConstant = details->getTurnConstant()*1.5;
  std::cout << "test2" << std::endl;
}

FourMotorDrive::~FourMotorDrive(void)
{
  delete this->leftDriveTrack;
  delete this->rightDriveTrack;
  delete this->stateController;
}

void FourMotorDrive::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

void FourMotorDrive::executeCommand(int * input)
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

void FourMotorDrive::turnRight(int input)
{
  input = input*turnConstant;
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->turnLeft(input);
  rightDriveTrack->turnRight(-input);
  while (!(leftDriveTrack->positionReached(input) || rightDriveTrack->positionReached(-input)))  {
    pros::delay(2);
  }
}

void FourMotorDrive::turnLeft(int input)
{
  input = input*turnConstant;
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->turnLeft(-input);
  rightDriveTrack->turnRight(input);
  while (!(leftDriveTrack->positionReached(-input) || rightDriveTrack->positionReached(input)))  {
    pros::delay(2);
  }
}

void FourMotorDrive::driveForward(int input)
{
  input = input * driveConstant;
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->driveForward(input);
  rightDriveTrack->driveForward(input);
  while (!(leftDriveTrack->positionReached(input) || rightDriveTrack->positionReached(input)))  {
    pros::delay(2);
    std::cout << leftDriveTrack->positionReached(input) << std::endl;
  }
}

void FourMotorDrive::driveBackward(int input)
{
  int inputR = -input * driveConstant;
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->driveBackward(inputR);
  rightDriveTrack->driveBackward(inputR);
  while (!(leftDriveTrack->positionReached(inputR) || rightDriveTrack->positionReached(inputR)))  {
    pros::delay(2);
  }
}

void FourMotorDrive::orbitPointRight(int input)
{}

void FourMotorDrive::orbitPointLeft(int input)
{}
