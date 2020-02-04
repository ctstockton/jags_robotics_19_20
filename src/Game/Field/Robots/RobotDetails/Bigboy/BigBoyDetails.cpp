#include "BigboyDetails.h"

BigboyDetails::BigboyDetails(void)
{
  this->leftDriveMotor1 = 9;
  this->leftDriveMotor2 = 5;
  this->leftDriveMotor3 = 4;
  this->rightDriveMotor1  = 8;
  this->rightDriveMotor2 = 2;
  this->rightDriveMotor3 = 1;
  this->hDriveMotor1 = 11;

  this->leftLiftMotor1 = 20;
  this->rightLiftMotor1 = 19;

  this->trayLiftMotor1 = 12;

  this->leftIntakeMotor1 = 18;
  this->rightIntakeMotor1 = 17;

  this->wheelRadius = 4;
  this->driveConstant = 900;
  this->centerpointRadius = 8.25;
  this->rotateConstant = ((centerpointRadius*driveConstant)/(360*wheelRadius));

  this->trayLiftMax = 13000;
  this->trayLiftPosition1 = 6500;
  this->trayLiftPosition2 = 4500;

  this->driveGearset = pros::E_MOTOR_GEARSET_18;
  this->liftGearset = pros::E_MOTOR_GEARSET_36;
  this->trayLiftGearset = pros::E_MOTOR_GEARSET_36;
  this->intakeGearset = pros::E_MOTOR_GEARSET_36;

  this->intakeIn = DIGITAL_R1;
  this->intakeOut = DIGITAL_R2;
  this->intakeCommand1 = DIGITAL_UP;
  this->intakeCommand2 = DIGITAL_DOWN;

  this->trayLiftUp = DIGITAL_X;
  this->trayLiftDown = DIGITAL_Y;
  this->trayLiftCommand1 = DIGITAL_R1;
  this->trayLiftCommand2 = DIGITAL_R2;

  this->trayLiftButton = 'H';
}

BigboyDetails::~BigboyDetails(void)
{}
