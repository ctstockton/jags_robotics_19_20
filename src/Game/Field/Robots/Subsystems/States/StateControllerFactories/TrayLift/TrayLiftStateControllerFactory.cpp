#include "TrayLiftStateControllerFactory.h"

TrayLiftStateControllerFactory::TrayLiftStateControllerFactory(void):
wrapper (0)
{}

/*****************************************************
  This constructor is called in the TrayLift Subsystem constructor.
  It maps the string provided to it and it calls the function which
  calls the constructor of the specified TrayLiftStateController.
*/
TrayLiftStateControllerFactory::TrayLiftStateControllerFactory(std::string string, pros::Motor* trayMotor, RobotDetails* details)
{
  unrestrictToggleFourStateMidStallTrayLiftControllerWrapper = new UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper();
  unrestrictToggleTrayLiftControllerWrapper = new UnrestrictToggleTrayLiftControllerWrapper();
  this->map["unrestrictToggleFourStateMidStallTrayLiftController"] = unrestrictToggleFourStateMidStallTrayLiftControllerWrapper;
  this->map["unrestrictToggleTrayLiftController"] = unrestrictToggleTrayLiftControllerWrapper;
  this->wrapper = /*map[string]*/unrestrictToggleFourStateMidStallTrayLiftControllerWrapper;
  this->stateController = this->wrapper->getController(trayMotor, details);
}

TrayLiftStateControllerFactory::~TrayLiftStateControllerFactory(void)
{
  delete unrestrictToggleTrayLiftControllerWrapper;
  delete unrestrictToggleFourStateMidStallTrayLiftControllerWrapper;
}
