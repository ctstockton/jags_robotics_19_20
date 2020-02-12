#ifndef TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#define TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#include "main.h"
#include "../TankDrive.h"
#include "TripleLeftTrack.h"
#include "TripleRightTrack.h"
#include "../../../../States/SubsystemStateControllers/TankDriveSC.h"

class SixMotorDrive : public TankDrive
{
public:
  SixMotorDrive(void);
  SixMotorDrive(RobotDetails*);
  virtual ~SixMotorDrive(void);

  virtual void obey(pros::Controller);
  virtual void executeCommand(int*);

private:
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);
};
#endif
