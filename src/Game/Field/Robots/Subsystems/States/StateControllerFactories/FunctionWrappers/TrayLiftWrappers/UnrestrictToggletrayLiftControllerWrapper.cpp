#include "UnrestrictToggleTrayLiftControllerWrapper.h"

UnrestrictToggleTrayLiftControllerWrapper::UnrestrictToggleTrayLiftControllerWrapper(void)
{}

UnrestrictToggleTrayLiftControllerWrapper::~UnrestrictToggleTrayLiftControllerWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleTrayLiftControllerWrapper::getController(pros::Motor* motor, RobotDetails* details)
{
  this->stateController = new UnrestrictToggleTrayLiftController(motor, details->getTrayLiftMax(), details->getTrayLiftUp(), details->getTrayLiftDown(), details->getTrayLiftCommand1(), details->getTrayLiftCommand2());
  return this->stateController;
}
