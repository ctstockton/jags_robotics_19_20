#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftState.h"
#include "../Subsystems/TrayLiftStates/Testing.h"
#include "main.h"
class TrayLiftController : public StateController
{
public:
  TrayLiftController(void);
  TrayLiftController(pros::Motor*, int);
  ~TrayLiftController(void);

  void obey(pros::Controller);
private:
  int trayUpperLimit;
  pros::Motor * trayMotor;

  TrayLiftState * testing;
};
#endif
