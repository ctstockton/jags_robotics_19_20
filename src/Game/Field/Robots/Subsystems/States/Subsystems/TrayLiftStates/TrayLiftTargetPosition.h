#ifndef SUBSYSTEMS_TRAYLIFTTARGETPOSITION_H
#define SUBSYSTEMS_TRAYLIFTTARGETPOSITION_H
#include "TrayLiftState.h"
class TrayLiftTargetPosition : public TrayLiftState
{
public:
  TrayLiftTargetPosition(void);
  TrayLiftTargetPosition(pros::Motor*, int, int);
  ~TrayLiftTargetPosition(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
private:
  int speed;
};
#endif
