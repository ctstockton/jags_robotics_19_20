#ifndef TANKDRIVE_FOURMOTOR_DOUBLERIGHTTRACK_H
#define TANKDRIVE_FOURMOTOR_DOUBLERIGHTTRACK_H
#include "main.h"
#include "../RightDriveTrack.h"

class DoubleRightTrack : public RightDriveTrack
{
public:
  DoubleRightTrack(void);
  DoubleRightTrack(int R1, int R2);
  ~DoubleRightTrack(void);

  void obey(pros::Controller);
  void turnAroundRight(void);
  void driveForward(void);

protected:
  pros::Motor * rightMotor1;
  pros::Motor * rightMotor2;
};
#endif
