#ifndef SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVESCORINGOBEY_H
#define SUBSYSTEMS_TANKDRIVESTATES_TANKDRIVESCORINGOBEY_H
#include "TankDriveState.h"
class TankDriveScoringObey : public TankDriveState
{
public:
  TankDriveScoringObey(void);
  ~TankDriveScoringObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
