#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTALL_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTALL_H
#include "TrayLiftState.h"
class TrayLiftStall : public TrayLiftState
{
public:
  TrayLiftStall(void);
  ~TrayLiftStall(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
