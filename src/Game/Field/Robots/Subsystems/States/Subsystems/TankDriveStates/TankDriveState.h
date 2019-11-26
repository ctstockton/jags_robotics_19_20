#ifndef SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVESTATE_H
#define SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVESTATE_H
#include "../../State.h"
#include "../../../Required/Drives/TankDrive/TankDriveTrack.h"
class TankDriveState : public State
{
public:
  TankDriveState(void);
  virtual ~TankDriveState(void);

  void setDriveTracks(TankDriveTrack*, TankDriveTrack*);
protected:
  TankDriveTrack * leftDriveTrack;
  TankDriveTrack * rightDriveTrack;
};
#endif
