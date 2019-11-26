#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftTesting.h"
#include "main.h"
class TrayLiftController : public StateController
{
public:
  TrayLiftController(void);
  TrayLiftController(pros::Motor*, int);
  ~TrayLiftController(void);

  void obey(pros::Controller);
private:
  TrayLiftTesting testing;
};
#endif
