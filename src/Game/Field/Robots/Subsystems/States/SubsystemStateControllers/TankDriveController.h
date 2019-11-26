#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TANKDRIVECONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TANKDRIVECONTROLLER_H
#include "../StateController.h"
#include "../../Required/Drives/TankDrive/TankDriveTrack.h"
#include "../Subsystems/TankDriveStates/TankDriveDefaultObey.h"
#include "../Subsystems/TankDriveStates/TankDriveScoringObey.h"
#include "main.h"
class TankDriveController : public StateController
{
public:
  TankDriveController(void);
  TankDriveController(TankDriveTrack*, TankDriveTrack*);
  ~TankDriveController(void);

  void obey(pros::Controller);
private:
  TankDriveDefaultObey defaultState;
  TankDriveScoringObey scoringState;
};
#endif
