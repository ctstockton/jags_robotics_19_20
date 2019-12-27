#ifndef MONOBARLIFT_POSITION_STATE_H
#define MONOBARLIFT_POSITION_STATE_H
#include "MonobarLiftState.h"
class MonobarLiftPositionState : public MononbarLiftState
{
public:
  MonobarLiftPositionState(void);
  virtual ~MonobarLiftPositionState(void);
protected:
  int position;
  int speed;
};
#endif
