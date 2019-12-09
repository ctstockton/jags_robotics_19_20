#include "TrayLiftController.h"

TrayLiftController::TrayLiftController(void)
{}

TrayLiftController::TrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2):
defaultState (new TrayLiftDefaultObey(motor, upper, raise, lower, util1))
{
  this->currentState = defaultState;
}

TrayLiftController::~TrayLiftController(void)
{
  delete defaultState;
}

void TrayLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
}
