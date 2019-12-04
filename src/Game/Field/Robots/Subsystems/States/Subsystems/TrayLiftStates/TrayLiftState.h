#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTATE_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTSTATE_H
#include "../../State.h"
class TrayLiftState : public State
{
public:
  TrayLiftState(void);
  virtual ~TrayLiftState(void);

  void initialize(pros::Motor*, int);
protected:
  pros::Motor * trayMotor;
  int position;
};
#endif
