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
  virtual ~MonobarLiftController(void);

  virtual void obey(pros::Controller);
protected:
  MonobarLiftDefaultObey defaultState;
  MonobarLiftBigboyCustom bigboy;
};
#endif
