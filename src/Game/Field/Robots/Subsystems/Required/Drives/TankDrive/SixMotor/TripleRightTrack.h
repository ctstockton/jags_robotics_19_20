#ifndef TANKDRIVE_SIXMOTOR_TRIPLERIGHTTRACK_H
#define TANKDRIVE_SIXMOTOR_TRIPLERIGHTTRACK_H
#include "main.h"
#include "../RightDriveTrack.h"

class TripleRightTrack : public RightDriveTrack
{
public:
  TripleRightTrack(void);
  TripleRightTrack(int R1, int R2, int R3, pros::motor_gearset_e gear);
  ~TripleRightTrack(void);

  void obey(pros::Controller);
  void scoringObey(pros::Controller);
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);

  void tarePosition(void);
  bool positionReached(int);

protected:
  pros::Motor * rightMotor1;
  pros::Motor * rightMotor2;
  pros::Motor * rightMotor3;
};
#endif
