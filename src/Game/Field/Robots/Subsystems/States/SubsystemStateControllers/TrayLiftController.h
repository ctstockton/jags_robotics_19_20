#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#include "AbstractControllers/LiftController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftDefaultObey.h"
#include "main.h"
class TrayLiftController : public LiftController
{
public:
  TrayLiftController(void);
  virtual ~TrayLiftController(void);
protected:
    TrayLiftState * defaultState;
    pros::Motor * trayMotor;
};
#endif
