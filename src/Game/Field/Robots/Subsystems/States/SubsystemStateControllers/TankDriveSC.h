#ifndef TANKDRIVE_SC_H
#define TANKDRIVE_SC_H
#include "../StateController.h"
#include "../../Required/Drives/TankDrive/TankDriveTrack.h"
#include "../Subsystems/TankDriveStates/TankDriveDefaultObey.h"
#include "../Subsystems/TankDriveStates/TankDriveScoringObey.h"
#include "main.h"
class TankDriveSC : public StateController
{
public:
  TankDriveSC(void);
  TankDriveSC(TankDriveTrack*, TankDriveTrack*);
  ~TankDriveSC(void);

  void obey(pros::Controller);
private:
  TankDriveDefaultObey defaultState;
  TankDriveScoringObey scoringState;
};
#endif
