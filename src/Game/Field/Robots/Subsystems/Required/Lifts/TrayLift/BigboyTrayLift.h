#ifndef LIFT_TRAYLIFT_BIGBOYTRAYLIFT_H
#define LIFT_TRAYLIFT_BIGBOYTRAYLIFT_H
#include "../Lift.h"
#include "../../../States/SubsystemStateControllers/SpecialistStateControllers/Bigboy/BigboyTrayLiftController.h"
#include "main.h"

class BigboyTrayLift : public Lift
{
public:
  BigboyTrayLift(void);
  BigboyTrayLift(int M1, pros::motor_gearset_e gear, int);
  ~BigboyTrayLift(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * trayMotor;
  bool completeLift;
  bool scoringLift;
};
#endif
