#include "UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper.h"

UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void)
{}

UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::~UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::getController(pros::Motor* motor, RobotDetails* details)
{
  this->stateController = new UnrestrictToggleFourStateMidStallTrayLiftController(motor, details->getTrayLiftMax(), details->getTrayLiftUp(), details->getTrayLiftDown(), details->getTrayLiftCommand1(), details->getTrayLiftCommand2());
  return this->stateController;
}
