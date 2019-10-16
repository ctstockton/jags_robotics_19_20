#ifndef DRIVES_DRIVEUTIL_DRIVETRACK_H
#define DRIVES_DRIVEUTIL_DRIVETRACK_H
#include "main.h"

class DriveTrack
{
public:
  DriveTrack(void);
  virtual ~DriveTrack(void);

  virtual void obey(pros::Controller) = 0;
  virtual void driveForward(void) = 0;
  virtual void turnAroundRight(void) = 0;
};
#endif
