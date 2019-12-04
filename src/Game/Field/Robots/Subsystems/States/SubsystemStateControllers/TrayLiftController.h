#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftTesting.h"
#include "../Subsystems/TrayLiftStates/TrayLiftTargetPosition.h"
#include "main.h"
class TrayLiftController : public StateController
{
public:
  TrayLiftController(void);
  TrayLiftController(pros::Motor*, int);
  virtual ~TrayLiftController(void);

  virtual void obey(pros::Controller);
protected:
  TrayLiftTesting testing;
};
#endif
