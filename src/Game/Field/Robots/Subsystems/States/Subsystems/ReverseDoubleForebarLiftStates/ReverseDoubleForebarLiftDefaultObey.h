#ifndef SUBSYSTEMS_REVERSEDOUBLEFOREBARLIFTSTATES_REVERSEDOUBLEFOREBARLIFTDEFAULTOBEY_H
#define SUBSYSTEMS_REVERSEDOUBLEFOREBARLIFTSTATES_REVERSEDOUBLEFOREBARLIFTDEFAULTOBEY_H
#include "ReverseDoubleForebarLiftState.h"
class ReverseDoubleForebarLiftDefaultObey : public ReverseDoubleForebarLiftState
{
public:
  ReverseDoubleForebarLiftDefaultObey(void);
  ReverseDoubleForebarLiftDefaultObey(pros::Motor*, pros::Motor*, int);
  ~ReverseDoubleForebarLiftDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
  void setPosition(int);
  int getPosition(void);
private:
  int position;
  int limit;
};
#endif
