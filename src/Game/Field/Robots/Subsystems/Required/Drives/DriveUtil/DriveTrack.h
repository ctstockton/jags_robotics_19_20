#ifndef DRIVES_DRIVEUTIL_DRIVETRACK_H
#define DRIVES_DRIVEUTIL_DRIVETRACK_H
#include "main.h"

class DriveTrack
{
public:
  DriveTrack(void);
  virtual ~DriveTrack(void);

  virtual void obey(pros::Controller) = 0;
  virtual void turnRight(int) = 0;
  virtual void turnLeft(int) = 0;
  virtual void driveForward(int) = 0;
  virtual void driveBackward(int) = 0;
  virtual void orbitPointRight(int) = 0;
  virtual void orbitPointLeft(int) = 0;

  virtual void tarePosition(void) = 0;
  virtual bool positionReached(int) = 0;
};
#endif
