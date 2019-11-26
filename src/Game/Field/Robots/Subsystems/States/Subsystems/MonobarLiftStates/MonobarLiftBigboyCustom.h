#ifndef SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTBIGBOYCUSTOM_H
#define SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTBIGBOYCUSTOM_H
#include "MonobarLiftState.h"
class MonobarLiftBigboyCustom : public MonobarLiftState
{
public:
  MonobarLiftBigboyCustom(void);
  ~MonobarLiftBigboyCustom(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
