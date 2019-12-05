#ifndef REVERSEDOUBLEFOREBARLIFTLOWEROBEY_H
#define REVERSEDOUBLEFOREBARLIFTLOWEROBEY_H
#include "ReverseDoubleForebarLiftState.h"
class ReverseDoubleForebarLiftLowerObey : public ReverseDoubleForebarLiftState
{
public:
  ReverseDoubleForebarLiftLowerObey(void);
  ReverseDoubleForebarLiftLowerObey(pros::Motor*, pros::Motor*);
  ~ReverseDoubleForebarLiftLowerObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
  void setPosition(int);
  int getPosition(void);
private:
  int position;
};
#endif
