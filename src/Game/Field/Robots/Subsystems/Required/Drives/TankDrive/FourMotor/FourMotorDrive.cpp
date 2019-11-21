#include "main.h"
#include "FourMotorDrive.h"

FourMotorDrive::FourMotorDrive(void)
{}

FourMotorDrive::FourMotorDrive(int L1, int L2, int R1, int R2, pros::motor_gearset_e gear, int driveConstant, float turnConstant)
{
  this->leftDriveTrack = new DoubleLeftTrack(L1, L2, gear);
  this->rightDriveTrack = new DoubleRightTrack(R1, R2, gear);
  this->driveConstant = driveConstant;
  this->turnConstant = turnConstant*1.5;
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

void FourMotorDrive::scoringObey(pros::Controller master)
{
  leftDriveTrack->scoringObey(master);
  rightDriveTrack->scoringObey(master);
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
  leftDriveTrack->turnLeft(-input);
  rightDriveTrack->turnRight(input);
  while (!(leftDriveTrack->positionReached(-input) || rightDriveTrack->positionReached(input)))  {
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
