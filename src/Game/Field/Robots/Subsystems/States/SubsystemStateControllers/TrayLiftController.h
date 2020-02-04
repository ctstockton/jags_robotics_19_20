#ifndef TRAYLIFT_CONTROLLER_H
#define TRAYLIFT_CONTROLLER_H
#include "AbstractControllers/LiftController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftDefaultObey.h"
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
