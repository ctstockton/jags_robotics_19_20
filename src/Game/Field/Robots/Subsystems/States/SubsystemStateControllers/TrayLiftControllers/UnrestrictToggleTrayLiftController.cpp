#include "UnrestrictToggleTrayLiftController.h"

UnrestrictToggleTrayLiftController::UnrestrictToggleTrayLiftController(void):
unrestrictedState (0)
{
  this->defaultState = 0;
}

UnrestrictToggleTrayLiftController::UnrestrictToggleTrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2)
{
  this->defaultState = new TrayLiftDefaultObey(motor, upper, raise, lower, util1, DIGITAL_LEFT, 1);
  this->unrestrictedState = new TrayLiftUnrestrictedObey(motor, raise, lower, DIGITAL_RIGHT, 2);
  this->currentState = defaultState;
}

UnrestrictToggleTrayLiftController::~UnrestrictToggleTrayLiftController(void)
{
  delete this->defaultState;
  delete this->unrestrictedState;
}

void UnrestrictToggleTrayLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch(this->targetState){
    case 1:
      this->currentState = unrestrictedState;
      break;
    case 2:
      this->currentState = this->defaultState;
      break;
    default:
      break;
  }
}
