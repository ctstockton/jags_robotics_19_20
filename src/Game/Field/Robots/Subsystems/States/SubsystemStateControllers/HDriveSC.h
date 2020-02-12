#ifndef H_DRIVE_SC_H
#define H_DRIVE_SC_H
#include "../StateController.h"
#include "../../Required/Drives/TankDrive/TankDriveTrack.h"
#include "../../Required/Drives/HDrive/HDriveTrack.h"
#include "../Subsystems/HDriveStates/HDriveDefaultObey.h"
#include "main.h"
class HDriveSC : public StateController
{
public:
  HDriveSC(void);
  HDriveSC(TankDriveTrack*, TankDriveTrack*, HDriveTrack*);
  ~HDriveSC(void);

  void obey(pros::Controller);
private:
  HDriveDefaultObey * defaultObey;
};
#endif
