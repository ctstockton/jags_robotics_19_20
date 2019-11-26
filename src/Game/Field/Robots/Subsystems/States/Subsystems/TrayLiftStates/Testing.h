#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TESTING_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TESTING_H
#include "TrayLiftState.h"
class Testing : public TrayLiftState
{
public:
  Testing(void);
  Testing(pros::Motor*, int);
  ~Testing(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
