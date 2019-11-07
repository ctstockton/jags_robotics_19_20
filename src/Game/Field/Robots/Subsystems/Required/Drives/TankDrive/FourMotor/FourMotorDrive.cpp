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

void FourMotorDrive::turnRight(int input)
{

}

void FourMotorDrive::turnLeft(int input)
{}

void FourMotorDrive::driveForward(int input)
{
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->driveForward(input * 900);
  rightDriveTrack->driveForward(input * 900);
  while (!(leftDriveTrack->positionReached(input*900) || rightDriveTrack->positionReached(input*900)))  {
    pros::delay(2);
  }
}

void FourMotorDrive::driveBackward(int input)
{
  int inputR = -input;
  leftDriveTrack->tarePosition();
  rightDriveTrack->tarePosition();
  leftDriveTrack->driveBackward(inputR * 900);
  rightDriveTrack->driveBackward(inputR * 900);
  while (!(leftDriveTrack->positionReached(inputR*900) || rightDriveTrack->positionReached(inputR*900)))  {
    pros::delay(2);
  }
}

void FourMotorDrive::orbitPointRight(int input)
{}

void FourMotorDrive::orbitPointLeft(int input)
{}
