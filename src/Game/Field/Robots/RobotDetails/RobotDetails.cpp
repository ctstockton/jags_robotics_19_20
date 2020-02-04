#include "RobotDetails.h"

RobotDetails::RobotDetails(void):
leftDriveMotor1 (0),
leftDriveMotor2 (0),
leftDriveMotor3 (0),
rightDriveMotor1 (0),
rightDriveMotor2 (0),
rightDriveMotor3 (0),
hDriveMotor1 (0),
hDriveMotor2 (0),
hDriveMotor3 (0),
leftLiftMotor1 (0),
leftLiftMotor2 (0),
rightLiftMotor1 (0),
rightLiftMotor2 (0),
leftIntakeMotor1 (0),
leftIntakeMotor2 (0),
rightIntakeMotor1 (0),
rightIntakeMotor2 (0),
trayLiftMotor1 (0),
trayLiftMotor2 (0),

wheelRadius (0),
rotateConstant (0),
driveConstant (0),
turnConstant (0),

liftLimit (0),
liftRaiseSpeed (0),
liftLowerSpeed (0),
liftPosition1 (0),
liftPosition2 (0),
liftPosition3 (0),

trayLiftMax (0),
trayLiftLimit (0),
trayLiftRaiseSpeed (0),
trayLiftLowerSpeed (0),
trayLiftPosition1 (0),
trayLiftPosition2 (0),
trayLiftPosition3 (0),

intakeSpeed (0),
outtakeSpeed (0),

centerpointRadius (0),

driveGearset (pros::E_MOTOR_GEARSET_36),
liftGearset (pros::E_MOTOR_GEARSET_36),
intakeGearset (pros::E_MOTOR_GEARSET_36),
trayLiftGearset (pros::E_MOTOR_GEARSET_36),

intakeIn (DIGITAL_R1),
intakeOut (DIGITAL_R2),
intakeCommand1 (DIGITAL_UP),
intakeCommand2 (DIGITAL_DOWN),

trayLiftUp (DIGITAL_X),
trayLiftDown(DIGITAL_Y),
trayLiftCommand1 (DIGITAL_X),
trayLiftCommand2 (DIGITAL_Y),

trayLiftButton ('A')
{}

RobotDetails::~RobotDetails(void)
{}

  int RobotDetails::getLeftDriveMotor1(void) const {return leftDriveMotor1;}
  int RobotDetails::getLeftDriveMotor2(void) const {return leftDriveMotor2;}
  int RobotDetails::getLeftDriveMotor3(void) const {return leftDriveMotor3;}
  int RobotDetails::getRightDriveMotor1(void) const {return rightDriveMotor1;}
  int RobotDetails::getRightDriveMotor2(void) const {return rightDriveMotor2;}
  int RobotDetails::getRightDriveMotor3(void) const {return rightDriveMotor3;}
  int RobotDetails::getHDriveMotor1(void) const {return hDriveMotor1;}
  int RobotDetails::getHDriveMotor2(void) const {return hDriveMotor2;}
  int RobotDetails::getHDriveMotor3(void) const {return hDriveMotor3;}
  int RobotDetails::getLeftLiftMotor1(void) const {return leftLiftMotor1;}
  int RobotDetails::getLeftLiftMotor2(void) const {return leftLiftMotor2;}
  int RobotDetails::getRightLiftMotor1(void) const {return rightLiftMotor1;}
  int RobotDetails::getRightLiftMotor2(void) const {return rightLiftMotor2;}
  int RobotDetails::getLeftIntakeMotor1(void) const {return leftIntakeMotor1;}
  int RobotDetails::getLeftIntakeMotor2(void) const {return leftIntakeMotor2;}
  int RobotDetails::getRightIntakeMotor1(void) const {return rightIntakeMotor1;}
  int RobotDetails::getRightIntakeMotor2(void) const {return rightIntakeMotor2;}
  int RobotDetails::getTrayLiftMotor1(void) const {return trayLiftMotor1;}
  int RobotDetails::getTrayLiftMotor2(void) const {return trayLiftMotor2;}
  int RobotDetails::getWheelRadius(void) const {return wheelRadius;}
  int RobotDetails::getRotateConstant(void) const {return rotateConstant;}
  int RobotDetails::getDriveConstant(void) const {return driveConstant;}
  int RobotDetails::getTurnConstant(void) const {return turnConstant;}

  int RobotDetails::getLiftLimit(void) const {return liftLimit;}
  int RobotDetails::getTrayLiftMax(void) const {return trayLiftMax;}
  int RobotDetails::getLiftRaiseSpeed(void) const {return liftRaiseSpeed;}
  int RobotDetails::getLiftLowerSpeed(void) const {return liftLowerSpeed;}
  int RobotDetails::getLiftPosition1(void) const {return liftPosition1;}
  int RobotDetails::getLiftPosition2(void)const {return liftPosition2;}
  int RobotDetails::getLiftPosition3(void) const {return liftPosition3;}

  int RobotDetails::getTrayLiftLimit(void) const {return trayLiftLimit;}
  int RobotDetails::getTrayLiftRaiseSpeed(void) const {return trayLiftRaiseSpeed;}
  int RobotDetails::getTrayLiftLowerSpeed(void) const {return trayLiftLowerSpeed;}
  int RobotDetails::getTrayLiftPosition1(void) const {return trayLiftPosition1;}
  int RobotDetails::getTrayLiftPosition2(void) const {return trayLiftPosition2;}
  int RobotDetails::getTrayLiftPosition3(void) const {return trayLiftPosition3;}

  int RobotDetails::getIntakeSpeed(void) const {return intakeSpeed;}
  int RobotDetails::getOuttakeSpeed(void) const {return outtakeSpeed;}

  float RobotDetails::getCenterpointRadius(void) const {return centerpointRadius;}

  pros::motor_gearset_e RobotDetails::getDriveGearset(void) const {return driveGearset;}
  pros::motor_gearset_e RobotDetails::getLiftGearset(void) const {return liftGearset;}
  pros::motor_gearset_e RobotDetails::getIntakeGearset(void) const {return intakeGearset;}
  pros::motor_gearset_e RobotDetails::getTrayLiftGearset(void) const {return trayLiftGearset;}

  pros::controller_digital_e_t RobotDetails::getIntakeIn(void) const {return intakeIn;}
  pros::controller_digital_e_t RobotDetails::getIntakeOut(void) const {return intakeOut;}
  pros::controller_digital_e_t RobotDetails::getIntakeCommand1(void) const {return intakeCommand1;}
  pros::controller_digital_e_t RobotDetails::getIntakeCommand2(void) const {return intakeCommand2;}

  pros::controller_digital_e_t RobotDetails::getLiftUp(void) const {return liftUp;}
  pros::controller_digital_e_t RobotDetails::getLiftDown(void) const {return liftDown;}

  pros::controller_digital_e_t RobotDetails::getTrayLiftUp(void) const {return trayLiftUp;}
  pros::controller_digital_e_t RobotDetails::getTrayLiftDown(void) const {return trayLiftDown;}
  pros::controller_digital_e_t RobotDetails::getTrayLiftCommand1(void) const {return trayLiftCommand1;}
  pros::controller_digital_e_t RobotDetails::getTrayLiftCommand2(void) const {return trayLiftCommand2;}

  char RobotDetails::getTrayLiftButton(void) const {return trayLiftButton;}
