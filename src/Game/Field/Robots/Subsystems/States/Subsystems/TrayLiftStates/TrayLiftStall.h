#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTALL_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTALL_H
#include "TrayLiftState.h"
class TrayLiftStall : public TrayLiftState
{
public:
  TrayLiftStall(void);
  TrayLiftStall(pros::controller_digital_e_t, int);
  ~TrayLiftStall(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
private:
  pros::controller_digital_e_t util;
};
#endif
