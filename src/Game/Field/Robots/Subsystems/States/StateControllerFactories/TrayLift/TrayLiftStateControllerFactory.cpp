#include "TrayLiftStateControllerFactory.h"

TrayLiftStateControllerFactory::TrayLiftStateControllerFactory(void):
wrapper (0)
{}

/*****************************************************
  This constructor is called in the TrayLift Subsystem constructor.
  It maps the string provided to it and it calls the function which
  calls the constructor of the specified TrayLiftStateController.
*/
TrayLiftStateControllerFactory::TrayLiftStateControllerFactory(std::string string, pros::Motor* trayMotor, int maxLimit, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2)
{
  unrestrictToggleFourStateMidStallTrayLiftControllerWrapper = new UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper();
  this->map["unrestrictToggleFourStateMidStallTrayLiftController"] = unrestrictToggleTrayLiftControllerWrapper;
  unrestrictToggleTrayLiftControllerWrapper = new UnrestrictToggleTrayLiftControllerWrapper();
  this->map["unrestrictToggleTrayLiftController"] = unrestrictToggleTrayLiftControllerWrapper;

  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(trayMotor, maxLimit, raise, lower, util1, util2);
}

TrayLiftStateControllerFactory::~TrayLiftStateControllerFactory(void)
{
  delete unrestrictToggleTrayLiftControllerWrapper;
  delete unrestrictToggleFourStateMidStallTrayLiftControllerWrapper;
}
