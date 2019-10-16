#ifndef DRIVES_TANKDRIVE_TANKDRIVETRACK_H
#define DRIVES_TANKDRIVE_TANKDRIVETRACK_H
#include "main.h"
#include "../DriveUtil/DriveTrack.h"

class TankDriveTrack : public DriveTrack
{
  public:
    TankDriveTrack(void);
    virtual ~TankDriveTrack(void);
};
#endif
