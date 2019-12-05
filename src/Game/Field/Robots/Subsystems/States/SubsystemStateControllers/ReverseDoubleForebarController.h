#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_REVERSEDOUBLEFOREBARCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_REVERSEDOUBLEFOREBARCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftDefaultObey.h"
#include "../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftRaiseObey.h"
#include "../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftLowerObey.h"
#include "main.h"
class ReverseDoubleForebarController : public StateController
{
public:
  ReverseDoubleForebarController(void);
  ReverseDoubleForebarController(pros::Motor*, pros::Motor*);
  ~ReverseDoubleForebarController(void);

  void obey(pros::Controller);
private:
  ReverseDoubleForebarLiftDefaultObey * defaultState;
  ReverseDoubleForebarLiftRaiseObey * raiseState;
  ReverseDoubleForebarLiftLowerObey * lowerState;
};
#endif
