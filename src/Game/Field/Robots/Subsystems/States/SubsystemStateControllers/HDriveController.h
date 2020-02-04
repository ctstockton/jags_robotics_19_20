#ifndef H_DRIVE_CONTROLLER_H
#define H_DRIVE_CONTROLLER_H
#include "../StateController.h"
#include "../../Required/Drives/TankDrive/TankDriveTrack.h"
#include "../../Required/Drives/HDrive/HDriveTrack.h"
#include "../Subsystems/HDriveStates/HDriveDefaultObey.h"
#include "main.h"
class HDriveController : public StateController
{
public:
  HDriveController(void);
  HDriveController(TankDriveTrack*, TankDriveTrack*, HDriveTrack*);
  ~HDriveController(void);

  void obey(pros::Controller);
private:
  HDriveDefaultObey * defaultObey;
};
#endif
