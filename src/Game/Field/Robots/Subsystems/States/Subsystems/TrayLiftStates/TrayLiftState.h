#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTATE_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTATE_H
#include "../../State.h"
class TrayLiftState : public State
{
public:
  TrayLiftState(void);
  TrayLiftState(pros::Motor*);
  virtual ~TrayLiftState(void)

private:
  pros::Motor * trayMotor;
};
#endif
