#ifndef SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVEDEFAULTOBEY_H
#define SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVEDEFAULTOBEY_H
#include "TankDriveState.h"
class TankDriveDefaultObey : public TankDriveState
{
public:
  TankDriveDefaultObey(void);
  ~TankDriveDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
