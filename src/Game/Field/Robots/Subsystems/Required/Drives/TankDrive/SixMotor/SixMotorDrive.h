#ifndef TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#define TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#include "main.h"
#include "../TankDrive.h"
#include "TripleLeftTrack.h"
#include "TripleRightTrack.h"

class SixMotorDrive : public TankDrive
{
public:
  SixMotorDrive(void);
  SixMotorDrive(int L1, int L2, int L3, int R1, int R2, int R3);
  virtual ~SixMotorDrive(void);

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
