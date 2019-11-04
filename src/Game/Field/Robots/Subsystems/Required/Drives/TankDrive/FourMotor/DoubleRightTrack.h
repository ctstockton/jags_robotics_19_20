#ifndef TANKDRIVE_FOURMOTOR_DOUBLERIGHTTRACK_H
#define TANKDRIVE_FOURMOTOR_DOUBLERIGHTTRACK_H
#include "main.h"
#include "../RightDriveTrack.h"

class DoubleRightTrack : public RightDriveTrack
{
public:
  DoubleRightTrack(void);
  DoubleRightTrack(int R1, int R2, pros::motor_gearset_e gear);
  ~DoubleRightTrack(void);

  void obey(pros::Controller);
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);

protected:
  pros::Motor * rightMotor1;
  pros::Motor * rightMotor2;
};
#endif
