#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONONE_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONONE_H
#include "../TrayLiftPosition.h"
class TrayLiftPositionOne : public TrayLiftPosition
{
public:
  TrayLiftPositionOne(void);
  TrayLiftPositionOne(pros::Motor*, int, int);
  ~TrayLiftPositionOne(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
