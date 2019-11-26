#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_MONOBARLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_MONOBARLIFTCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/MonobarLiftStates/MonobarLiftDefaultObey.h"
#include "../Subsystems/MonobarLiftStates/MonobarLiftBigboyCustom.h"
#include "main.h"
class MonobarLiftController : public StateController
{
public:
  MonobarLiftController(void);
  MonobarLiftController(pros::Motor*, pros::Motor*);
  ~MonobarLiftController(void);

  void obey(pros::Controller);
private:
  MonobarLiftDefaultObey defaultState;
  MonobarLiftBigboyCustom bigboy;
};
#endif
