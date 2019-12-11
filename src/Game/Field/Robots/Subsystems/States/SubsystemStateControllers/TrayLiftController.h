#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_TRAYLIFTCONTROLLER_H
#include "../StateController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftDefaultObey.h"
#include "../Subsystems/TrayLiftStates/TrayLiftTargetPosition.h"
#include "main.h"
class TrayLiftController : public StateController
{
public:
  TrayLiftController(void);
  TrayLiftController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  virtual ~TrayLiftController(void);

  virtual void obey(pros::Controller);
protected:
  TrayLiftState * defaultState;
};
#endif
