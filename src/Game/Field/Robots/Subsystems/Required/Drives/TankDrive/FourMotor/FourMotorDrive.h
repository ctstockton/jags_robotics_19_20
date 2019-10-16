#ifndef TANKDRIVE_FOURMOTOR_FOURMOTORDRIVE_H
#define TANKDRIVE_FOURMOTOR_FOURMOTORDRIVE_H
#include "main.h"
#include "../TankDrive.h"
#include "DoubleLeftTrack.h"
#include "DoubleRightTrack.h"

class FourMotorDrive : public TankDrive
{
public:
  FourMotorDrive(void);
  FourMotorDrive(int L1, int L2, int R1, int R2);
  virtual ~FourMotorDrive(void);

  TankDriveTrack * leftDriveTrack;
  TankDriveTrack * rightDriveTrack;

  void obey(pros::Controller);
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);
};
#endif
