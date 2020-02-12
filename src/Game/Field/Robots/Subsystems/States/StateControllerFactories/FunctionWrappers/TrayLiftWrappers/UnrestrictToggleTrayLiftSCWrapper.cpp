#include "UnrestrictToggleTrayLiftSCWrapper.h"

UnrestrictToggleTrayLiftSCWrapper::UnrestrictToggleTrayLiftSCWrapper(void)
{}

UnrestrictToggleTrayLiftSCWrapper::~UnrestrictToggleTrayLiftSCWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleTrayLiftSCWrapper::getController(pros::Motor* motor, RobotDetails* details)
{
  this->stateController = new UnrestrictToggleTrayLiftSC(motor, details->getTrayLiftMax(), details->getTrayLiftUp(), details->getTrayLiftDown(), details->getTrayLiftCommand1(), details->getTrayLiftCommand2());
  return this->stateController;
}
