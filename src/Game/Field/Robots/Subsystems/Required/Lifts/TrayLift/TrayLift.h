#ifndef LIFT_TRAYLIFT_TRAYLIFT_H
#define LIFT_TRAYLIFT_TRAYLIFT_H
#include "../Lift.h"
#include "../../../States/SubsystemStateControllers/TrayLiftController.h"
#include "main.h"

class TrayLift : public Lift
{
public:
  TrayLift(void);
  TrayLift(int M1, pros::motor_gearset_e gear, int);
  ~TrayLift(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * trayMotor;
};
#endif
