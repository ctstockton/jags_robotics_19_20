#ifndef SEVEN_MOTOR_H_DRIVE_H
#define SEVEN_MOTOR_H_DRIVE_H
#include "../HDrive.h"
#include "../../../../States/SubsystemStateControllers/HDriveSC.h"
#include "../../TankDrive/SixMotor/SixMotorDrive.h"
#include "SingleHTrack.h"

class SevenMotorHDrive : public HDrive
{
public:
  SevenMotorHDrive(void);
  SevenMotorHDrive(RobotDetails*);
  ~SevenMotorHDrive(void);

  void obey(pros::Controller);
  void executeCommand(int*);

private:
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);
  void strafeLeft(int);
  void strafeRight(int);
};
#endif
