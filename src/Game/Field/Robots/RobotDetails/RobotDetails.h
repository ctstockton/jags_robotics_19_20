#ifndef ROBOT_DETAILS_H
#define ROBOT_DETAILS_H
#include "main.h"
#include "../Subsystems/Required/Drives/HDrive/HDriveTrack.h"
#include "../Subsystems/Required/Drives/TankDrive/TankDriveTrack.h"

class RobotDetails
{
public:
  RobotDetails(void);
  ~RobotDetails(void);

  int getLeftDriveMotor1(void) const;
  int getLeftDriveMotor2(void) const;
  int getLeftDriveMotor3(void) const;
  int getRightDriveMotor1(void) const;
  int getRightDriveMotor2(void) const;
  int getRightDriveMotor3(void) const;
  int getHDriveMotor1(void) const;
  int getHDriveMotor2(void) const;
  int getHDriveMotor3(void) const;
  int getLeftLiftMotor1(void) const;
  int getLeftLiftMotor2(void) const;
  int getRightLiftMotor1(void) const;
  int getRightLiftMotor2(void) const;
  int getLeftIntakeMotor1(void) const;
  int getLeftIntakeMotor2(void) const;
  int getRightIntakeMotor1(void) const;
  int getRightIntakeMotor2(void) const;
  int getTrayLiftMotor1(void) const;
  int getTrayLiftMotor2(void) const;
  int getWheelRadius(void) const;
  int getRotateConstant(void) const;
  int getDriveConstant(void) const;
  int getTurnConstant(void) const;

  int getLiftLimit(void) const;
  int getLiftRaiseSpeed(void) const;
  int getLiftLowerSpeed(void) const;
  int getLiftPosition1(void) const;
  int getLiftPosition2(void)const;
  int getLiftPosition3(void) const;

  int getTrayLiftLimit(void) const;
  int getTrayLiftMax(void) const;
  int getTrayLiftRaiseSpeed(void) const;
  int getTrayLiftLowerSpeed(void) const;
  int getTrayLiftPosition1(void) const;
  int getTrayLiftPosition2(void) const;
  int getTrayLiftPosition3(void) const;

  int getIntakeSpeed(void) const;
  int getOuttakeSpeed(void) const;

  float getCenterpointRadius(void) const;

  pros::motor_gearset_e getDriveGearset(void) const;
  pros::motor_gearset_e getLiftGearset(void) const;
  pros::motor_gearset_e getIntakeGearset(void) const;
  pros::motor_gearset_e getTrayLiftGearset(void) const;

  pros::controller_digital_e_t getIntakeIn(void) const;
  pros::controller_digital_e_t getIntakeOut(void) const;
  pros::controller_digital_e_t getIntakeCommand1(void) const;
  pros::controller_digital_e_t getIntakeCommand2(void) const;

  pros::controller_digital_e_t getLiftUp(void) const;
  pros::controller_digital_e_t getLiftDown(void) const;

  pros::controller_digital_e_t getTrayLiftUp(void) const;
  pros::controller_digital_e_t getTrayLiftDown(void) const;
  pros::controller_digital_e_t getTrayLiftCommand1(void) const;
  pros::controller_digital_e_t getTrayLiftCommand2(void) const;

  char getTrayLiftButton(void) const;

protected:
  int
      leftDriveMotor1,
      leftDriveMotor2,
      leftDriveMotor3,
      rightDriveMotor1,
      rightDriveMotor2,
      rightDriveMotor3,
      hDriveMotor1,
      hDriveMotor2,
      hDriveMotor3,
      leftLiftMotor1,
      leftLiftMotor2,
      rightLiftMotor1,
      rightLiftMotor2,
      leftIntakeMotor1,
      leftIntakeMotor2,
      rightIntakeMotor1,
      rightIntakeMotor2,
      trayLiftMotor1,
      trayLiftMotor2,

      wheelRadius,
      rotateConstant,
      driveConstant,
      turnConstant,

      liftLimit,
      liftRaiseSpeed,
      liftLowerSpeed,
      liftPosition1,
      liftPosition2,
      liftPosition3,

      trayLiftLimit,
      trayLiftMax,
      trayLiftRaiseSpeed,
      trayLiftLowerSpeed,
      trayLiftPosition1,
      trayLiftPosition2,
      trayLiftPosition3,

      intakeSpeed,
      outtakeSpeed;

  float
      centerpointRadius;

  pros::motor_gearset_e
      driveGearset,
      liftGearset,
      intakeGearset,
      trayLiftGearset;

  pros::controller_digital_e_t
      intakeIn,
      intakeOut,
      intakeCommand1,
      intakeCommand2,

      liftUp,
      liftDown,

      trayLiftUp,
      trayLiftDown,
      trayLiftCommand1,
      trayLiftCommand2;

  char
      trayLiftButton;
};
#endif
