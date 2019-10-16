#ifndef DRIVES_TANKDRIVE_TANKDRIVE_H
#define DRIVES_TANKDRIVE_TANKDRIVE_H
#include "main.h"
#include "../Drive.h"
#include "TankDriveTrack.h"
#include "LeftDriveTrack.h"

class TankDrive : public Drive
{
public:
  TankDrive(void);
  virtual ~TankDrive(void);
};
#endif
