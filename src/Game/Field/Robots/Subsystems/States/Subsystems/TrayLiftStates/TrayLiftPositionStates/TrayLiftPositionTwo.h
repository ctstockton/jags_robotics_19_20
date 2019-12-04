#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONTWO_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTPOSITIONTWO_H
#include "../TrayLiftPosition.h"
class TrayLiftPositionTwo : public TrayLiftPosition
{
public:
  TrayLiftPositionTwo(void);
  TrayLiftPositionTwo(pros::Motor*, int, int);
  ~TrayLiftPositionTwo(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
