#include "TRexDetails.h"

TRexDetails::TRexDetails(void)
{
  this->leftDriveMotor1 = 12;
  this->leftDriveMotor2 = 11;
  this->rightDriveMotor1 = 13;
  this->rightDriveMotor2 = 14;
  this->leftLiftMotor1 = 9;
  this->rightLiftMotor1 = 10;
  this->leftIntakeMotor1 = 2;
  this->rightIntakeMotor1 = 3;

  this->wheelRadius = 4;
  this->driveConstant = 900;
  this->turnConstant = 5;

  this->liftUp = DIGITAL_L1;
  this->liftDown = DIGITAL_L2;
  this->liftLimit = 600;
  this->liftRaiseSpeed = 85;
  this->liftLowerSpeed = 75;

  this->intakeIn = DIGITAL_R1;
  this->intakeOut = DIGITAL_R2;
  this->intakeCommand1 = DIGITAL_UP;
  this->intakeCommand2 = DIGITAL_DOWN;
  this->intakeSpeed = 127;
  this->outtakeSpeed = -80;

  this->centerpointRadius = 8.25;
  this->rotateConstant = ((this->centerpointRadius*this->driveConstant)/(360*this->wheelRadius));

  this->driveGearset = pros::E_MOTOR_GEARSET_18;
  this->liftGearset = pros::E_MOTOR_GEARSET_36;
  this->intakeGearset = pros::E_MOTOR_GEARSET_36;
}

TRexDetails::~TRexDetails(void)
{}
