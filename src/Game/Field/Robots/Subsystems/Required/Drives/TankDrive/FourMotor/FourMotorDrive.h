#ifndef TANKDRIVE_FOURMOTOR_FOURMOTORDRIVE_H
#define TANKDRIVE_FOURMOTOR_FOURMOTORDRIVE_H
#include "main.h"
#include "../TankDrive.h"
#include "DoubleLeftTrack.h"
#include "DoubleRightTrack.h"
#include "../../../../States/SubsystemStateControllers/TankDriveController.h"

class FourMotorDrive : public TankDrive
{
public:
  FourMotorDrive(void);
  FourMotorDrive(int L1, int L2, int R1, int R2, pros::motor_gearset_e gear, int, float);
  virtual ~FourMotorDrive(void);

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
