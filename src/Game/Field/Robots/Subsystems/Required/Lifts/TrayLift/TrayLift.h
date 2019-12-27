#ifndef LIFT_TRAYLIFT_TRAYLIFT_H
#define LIFT_TRAYLIFT_TRAYLIFT_H
#include "../Lift.h"
#include "../../../States/SubsystemStateControllers/TrayLiftControllers/UnrestrictToggleTrayLiftController.h"
#include "../../../States/StateControllerFactories/TrayLift/TrayLiftStateControllerFactory.h"
#include "main.h"

class TrayLift : public Lift
{
public:
  TrayLift(void);
  TrayLift(std::string, int M1, pros::motor_gearset_e gear, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~TrayLift(void);

  void obey(pros::Controller);
  void executeCommand(int*);
private:
  pros::Motor * trayMotor;
  TrayLiftStateControllerFactory * factory;
};
#endif
