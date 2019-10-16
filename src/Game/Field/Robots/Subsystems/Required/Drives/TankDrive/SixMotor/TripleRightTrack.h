#ifndef TANKDRIVE_SIXMOTOR_TRIPLERIGHTTRACK_H
#define TANKDRIVE_SIXMOTOR_TRIPLERIGHTTRACK_H
#include "main.h"
#include "../RightDriveTrack.h"

class TripleRightTrack : public RightDriveTrack
{
public:
  TripleRightTrack(void);
  TripleRightTrack(int R1, int R2, int R3);
  ~TripleRightTrack(void);

  void obey(pros::Controller);
  void driveForward(void);
  void turnAroundRight(void);

protected:
  pros::Motor * rightMotor1;
  pros::Motor * rightMotor2;
  pros::Motor * rightMotor3;
};
#endif
