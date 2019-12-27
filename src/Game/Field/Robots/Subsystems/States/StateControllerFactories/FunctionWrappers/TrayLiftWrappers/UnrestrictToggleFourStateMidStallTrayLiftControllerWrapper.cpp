#include "UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper.h"

UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void)
{}

UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::~UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper::getController(pros::Motor* motor, int limit, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2)
{
  this->stateController = new UnrestrictToggleFourStateMidStallTrayLiftController(motor, limit, raise, lower, util1, util2);
 return this->stateController;
}
