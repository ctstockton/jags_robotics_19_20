#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTTESTING_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTTESTING_H
#include "TrayLiftState.h"
class TrayLiftTesting : public TrayLiftState
{
public:
  TrayLiftTesting(void);
  TrayLiftTesting(pros::Motor*, int);
  ~TrayLiftTesting(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
