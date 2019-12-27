#include "UnrestrictToggleTrayLiftControllerWrapper.h"

UnrestrictToggleTrayLiftControllerWrapper::UnrestrictToggleTrayLiftControllerWrapper(void)
{}

UnrestrictToggleTrayLiftControllerWrapper::~UnrestrictToggleTrayLiftControllerWrapper(void)
{
  delete this->stateController;
}

StateController * UnrestrictToggleTrayLiftControllerWrapper::getController(pros::Motor* motor, int limit, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2)
{
  this->stateController = new UnrestrictToggleTrayLiftController(motor, limit, raise, lower, util1, util2);
  return this->stateController;
}
