#ifndef SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTSTATE_H
#define SUBSYSTEMS_MONOBARLIFTSTATES_MONOBARLIFTSTATE_H
#include "../../State.h"
class MonobarLiftState : public State
{
public:
  MonobarLiftState(void);
  virtual ~MonobarLiftState(void);

  void setMotors(pros::Motor*, pros::Motor*);
protected:
  pros::Motor * leftMotor;
  pros::Motor * rightMotor;
};
#endif
