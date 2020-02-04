#ifndef LIFT_TRAYLIFT_TRAYLIFT_H
#define LIFT_TRAYLIFT_TRAYLIFT_H
#include "../Lift.h"
#include "../../../States/StateControllerFactories/TrayLift/TrayLiftStateControllerFactory.h"
#include "main.h"

class TrayLift : public Lift
{
public:
  TrayLift(void);
  TrayLift(std::string, RobotDetails*);
  ~TrayLift(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * trayMotor;
  TrayLiftStateControllerFactory * factory;
};
#endif
