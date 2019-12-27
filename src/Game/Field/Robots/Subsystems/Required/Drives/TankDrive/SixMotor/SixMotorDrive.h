#ifndef TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#define TANKDRIVE_SIXMOTOR_SIXMOTORDRIVE_H
#include "main.h"
#include "../TankDrive.h"
#include "TripleLeftTrack.h"
#include "TripleRightTrack.h"
#include "../../../../States/SubsystemStateControllers/TankDriveController.h"

class SixMotorDrive : public TankDrive
{
public:
  SixMotorDrive(void);
  SixMotorDrive(int L1, int L2, int L3, int R1, int R2, int R3, pros::motor_gearset_e gear, float);
  virtual ~SixMotorDrive(void);

  void obey(pros::Controller);
  void executeCommand(int*);

private:
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);
};
#endif
