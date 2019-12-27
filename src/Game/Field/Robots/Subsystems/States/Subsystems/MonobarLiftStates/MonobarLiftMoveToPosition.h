#ifndef MONOBARLIFT_MOVE_TO_POSITION_H
#define MONOBARLIFT_MOVE_TO_POSITION_H
#include "MonobarLiftPositionState.h"
class MonobarLiftMoveToPosition : public MonobarLiftPositionState
{
public:
  MonobarLiftMoveToPosition(void);
  MonobarLiftMoveToPosition(pros::Motor*, pros::Motor*, int, int);
  ~MonobarLiftMoveToPosition(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
