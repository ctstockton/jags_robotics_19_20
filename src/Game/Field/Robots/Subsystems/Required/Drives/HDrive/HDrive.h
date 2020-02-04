#ifndef DRIVES_HDRIVE_HDRIVE_H
#define DRIVES_HDRIVE_HDRIVE_H
#include "main.h"
#include "../TankDrive/TankDrive.h"
#include "HDriveTrack.h"
class HDrive : public TankDrive
{
public:
  HDrive(void);
  ~HDrive(void);
protected:
  HDriveTrack * hDriveTrack;
};
#endif
