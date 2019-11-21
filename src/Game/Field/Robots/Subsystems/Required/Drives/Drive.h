/*-There are multiple types of drives, which have specific components:
  - TankDrive (4 motor / 6 motor)
  -   2 x TankDriveTracks (2 motor / 3 motor)
  - HDrive : inhereted from TankDrive
  -   2 x TankDriveTracks
  -   1 x HDriveTrack
*/
#ifndef SUBSYSTEMS_DRIVES_DRIVE_H
#define SUBSYSTEMS_DRIVES_DRIVE_H
#include "main.h"
#include "../../Subsystem.h"

class Drive : public Subsystem
{
public:
  Drive(void);
  virtual ~Drive(void);

  //This method is the structure for the command system to interface with
  // the drive subsystem. The first element of the int pointer designates
  //  which helper method to call and feed it the correct number of
  // parameters, which are pulled from the subsequent addresses after the
  // provided int pointer
  virtual void executeCommand(int*) = 0;

protected:
  //When the helper method is called by the executeCommand method, using
  // the int parameter supplied by the executeCommand method
  virtual void turnRight(int) = 0;
  virtual void turnLeft(int) = 0;
  virtual void driveForward(int) = 0;
  virtual void driveBackward(int) = 0;
  virtual void orbitPointRight(int) = 0;
  virtual void orbitPointLeft(int) = 0;

  int driveConstant;
  int rotateConstant;
  float turnConstant;
};
#endif
