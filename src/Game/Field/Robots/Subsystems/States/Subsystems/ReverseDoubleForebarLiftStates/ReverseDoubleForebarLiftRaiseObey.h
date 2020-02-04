#ifndef REVERSEDOUBLEFOREBARLIFTRAISEOBEY_H
#define REVERSEDOUBLEFOREBARLIFTRAISEOBEY_H
#include "ReverseDoubleForebarLiftState.h"
class ReverseDoubleForebarLiftRaiseObey : public ReverseDoubleForebarLiftState
{
public:
  ReverseDoubleForebarLiftRaiseObey(void);
  ReverseDoubleForebarLiftRaiseObey(pros::Motor*, pros::Motor*, int, pros::controller_digital_e_t);
  ~ReverseDoubleForebarLiftRaiseObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
  void setPosition(int);
  int getPosition(void);
private:
  int position;
  int raiseSpeed;
  pros::controller_digital_e_t control;
};
#endif
