#ifndef H_DRIVE_DEFAULT_OBEY_H
#define H_DRIVE_DEFAULT_OBEY_H
#include "main.h"
#include "HDriveState.h"

class HDriveDefaultObey : public HDriveState
{
public:
  HDriveDefaultObey(void);
  HDriveDefaultObey(TankDriveTrack*, TankDriveTrack*, HDriveTrack*);
  ~HDriveDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
