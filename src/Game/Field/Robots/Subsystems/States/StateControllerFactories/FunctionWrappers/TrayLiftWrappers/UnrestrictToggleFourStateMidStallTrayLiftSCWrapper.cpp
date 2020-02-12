#include "UnrestrictToggleFourStateMidStallTrayLiftSCWrapper.h"

UnrestrictToggleFourStateMidStallTrayLiftSCWrapper::UnrestrictToggleFourStateMidStallTrayLiftSCWrapper(void)
{}

UnrestrictToggleFourStateMidStallTrayLiftSCWrapper::~UnrestrictToggleFourStateMidStallTrayLiftSCWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleFourStateMidStallTrayLiftSCWrapper::getController(pros::Motor* motor, RobotDetails* details)
{
  this->stateController = new UnrestrictToggleFourStateMidStallTrayLiftSC(motor, details->getTrayLiftMax(), details->getTrayLiftUp(), details->getTrayLiftDown(), details->getTrayLiftCommand1(), details->getTrayLiftCommand2());
  return this->stateController;
}
