#ifndef TRAYLIFT_SC_H
#define TRAYLIFT_SC_H
#include "AbstractControllers/LiftStateController.h"
#include "../Subsystems/TrayLiftStates/TrayLiftDefaultObey.h"
class TrayLiftSC : public LiftStateController
{
public:
  TrayLiftSC(void);
  virtual ~TrayLiftSC(void);
protected:
    TrayLiftState * defaultState;
    pros::Motor * trayMotor;
};
#endif
