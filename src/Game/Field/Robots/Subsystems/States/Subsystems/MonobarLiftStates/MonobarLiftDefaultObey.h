#ifndef SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTDEFAULTOBEY_H
#define SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTDEFAULTOBEY_H
#include "MonobarLiftState.h"
class MonobarLiftDefaultObey : public MonobarLiftState
{
public:
  MonobarLiftDefaultObey(void);
  ~MonobarLiftDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
