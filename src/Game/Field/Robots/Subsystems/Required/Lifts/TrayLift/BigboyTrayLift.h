#ifndef LIFT_TRAYLIFT_BIGBOYTRAYLIFT_H
#define LIFT_TRAYLIFT_BIGBOYTRAYLIFT_H
#include "../Lift.h"
#include "main.h"

class BigboyTrayLift : public Lift
{
public:
  BigboyTrayLift(void);
  BigboyTrayLift(int M1, pros::motor_gearset_e gear);
  ~BigboyTrayLift(void);

  void obey(pros::Controller);
  void scoringObey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * trayMotor;
  pros::Motor * trayMotorReverse;
  bool completeLift;
  bool scoringLift;
};
#endif
