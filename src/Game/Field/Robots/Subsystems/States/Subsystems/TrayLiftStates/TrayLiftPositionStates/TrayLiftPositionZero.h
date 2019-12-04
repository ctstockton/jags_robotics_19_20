#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONZERO_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONZERO_H
#include "../TrayLiftPosition.h"
class TrayLiftPositionZero : public TrayLiftPosition
{
public:
  TrayLiftPositionZero(void);
  TrayLiftPositionZero(pros::Motor*, int, int);
  ~TrayLiftPositionZero(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
