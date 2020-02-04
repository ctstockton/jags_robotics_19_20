#ifndef H_DRIVE_STATE_H
#define H_DRIVE_STATE_H
#include "../../State.h"
#include "../../../Required/Drives/TankDrive/TankDriveTrack.h"
#include "../../../Required/Drives/HDrive/HDriveTrack.h"
class HDriveState : public State
{
public:
  HDriveState(void);
  virtual ~HDriveState(void);

protected:
  TankDriveTrack * leftDriveTrack;
  TankDriveTrack * rightDriveTrack;
  HDriveTrack * hDriveTrack;
};
#endif
