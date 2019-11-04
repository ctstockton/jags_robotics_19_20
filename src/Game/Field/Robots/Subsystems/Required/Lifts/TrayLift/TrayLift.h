#ifndef LIFT_TRAYLIFT_TRAYLIFT_H
#define LIFT_TRAYLIFT_TRAYLIFT_H
#include "../Lift.h"
#include "main.h"

class TrayLift : public Lift
{
public:
  TrayLift(void);
  TrayLift(int M1, pros::motor_gearset_e gear);
  ~TrayLift(void);

  void obey(pros::Controller);

protected:
  pros::Motor * trayMotor;
  pros::Motor * trayMotorReverse;
};
#endif
