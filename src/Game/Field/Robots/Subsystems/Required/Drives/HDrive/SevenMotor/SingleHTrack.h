#ifndef SINGLE_H_TRACK_H
#define SINGLE_H_TRACK_H
#include "main.h"
#include "../HDriveTrack.h"

class SingleHTrack : public HDriveTrack
{
public:
  SingleHTrack(void);
  SingleHTrack(int, pros::motor_gearset_e);
  ~SingleHTrack(void);

  void obey(pros::Controller);
  void scoringObey(pros::Controller);
  void turnRight(int);
  void turnLeft(int);
  void driveForward(int);
  void driveBackward(int);
  void orbitPointRight(int);
  void orbitPointLeft(int);
  void strafeLeft(int);
  void strafeRight(int);

  void tarePosition(void);
  bool positionReached(int);

protected:
  pros::Motor * hMotor;
  int input2;
  bool bypass;
};
#endif
