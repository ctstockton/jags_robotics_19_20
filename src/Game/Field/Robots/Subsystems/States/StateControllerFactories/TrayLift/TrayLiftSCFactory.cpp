#include "TrayLiftSCFactory.h"

TrayLiftSCFactory::TrayLiftSCFactory(void):
wrapper (0)
{}

/*****************************************************
  This constructor is called in the TrayLift Subsystem constructor.
  It maps the string provided to it and it calls the function which
  calls the constructor of the specified TrayLiftStateController.
*/
TrayLiftSCFactory::TrayLiftSCFactory(std::string string, pros::Motor* trayMotor, RobotDetails* details)
{
  unrestrictToggleFourStateMidStallTrayLiftSCWrapper = new UnrestrictToggleFourStateMidStallTrayLiftSCWrapper();
  unrestrictToggleTrayLiftSCWrapper = new UnrestrictToggleTrayLiftSCWrapper();
  this->map["unrestrictToggleFourStateMidStallTrayLiftController"] = unrestrictToggleFourStateMidStallTrayLiftSCWrapper;
  this->map["unrestrictToggleTrayLiftController"] = unrestrictToggleTrayLiftSCWrapper;
  this->wrapper = /*map[string]*/unrestrictToggleFourStateMidStallTrayLiftSCWrapper;
  this->stateController = this->wrapper->getController(trayMotor, details);
}

TrayLiftSCFactory::~TrayLiftSCFactory(void)
{
  delete unrestrictToggleTrayLiftSCWrapper;
  delete unrestrictToggleFourStateMidStallTrayLiftSCWrapper;
}
