#ifndef SUBSYSTEMS_REVERSEDOUBLEFOREBARLIFTSTATES_REVERSEDOUBLEFOREBARLIFTSTATE_H
#define SUBSYSTEMS_REVERSEDOUBLEFOREBARLIFTSTATES_REVERSEDOUBLEFOREBARLIFTSTATE_H
#include "../../State.h"
class ReverseDoubleForebarLiftState : public State
{
public:
  ReverseDoubleForebarLiftState(void);
  virtual ~ReverseDoubleForebarLiftState(void);
protected:
  pros::Motor * leftMotor;
  pros::Motor * rightMotor;
};
#endif
