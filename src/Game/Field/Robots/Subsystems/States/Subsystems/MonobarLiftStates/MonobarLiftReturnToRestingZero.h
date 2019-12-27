#ifndef MONOBARLIFT_RETURN_TO_RESTING_ZERO_H
#define MONOBARLIFT_RETURN_TO_RESTING_ZERO_H
#include "MonobarLiftPositionState.h"
class MonobarLiftReturnToRestingZero : public MonobarLiftPositionState
{
public:
  MonobarLiftReturnToRestingZero(void);
  MonobarLiftReturnToRestingZero(pros::Motor*, pros::Motor*, int, int);
  ~MonobarLiftReturnToRestingZero(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
