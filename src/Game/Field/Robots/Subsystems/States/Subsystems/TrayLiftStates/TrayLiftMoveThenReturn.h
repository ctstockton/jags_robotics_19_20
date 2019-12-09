#ifndef TRAYLIFT_MOVE_THEN_RETURN_H
#define TRAYLIFT_MOVE_THEN_RETURN_H
#include "TrayLiftPosition.h"
class TrayLiftMoveThenReturn : public TrayLiftPosition
{
public:
  TrayLiftMoveThenReturn(void);
  TrayLiftMoveThenReturn(pros::Motor*, int, int, int);
  ~TrayLiftMoveThenReturn(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
