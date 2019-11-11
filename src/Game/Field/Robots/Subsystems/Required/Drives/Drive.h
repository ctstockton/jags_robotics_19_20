#ifndef SUBSYSTEMS_DRIVES_DRIVE_H
#define SUBSYSTEMS_DRIVES_DRIVE_H
#include "main.h"
#include "../../Subsystem.h"

class Drive : public Subsystem
{
public:
  Drive(void);
  virtual ~Drive(void);

protected:
  virtual void turnRight(int) = 0;
  virtual void turnLeft(int) = 0;
  virtual void driveForward(int) = 0;
  virtual void driveBackward(int) = 0;
  virtual void orbitPointRight(int) = 0;
  virtual void orbitPointLeft(int) = 0;
};
#endif
