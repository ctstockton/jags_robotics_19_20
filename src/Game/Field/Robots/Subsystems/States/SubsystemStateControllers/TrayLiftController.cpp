#include "TrayLiftController.h"

TrayLiftController::TrayLiftController(void)
{}

TrayLiftController::TrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2):
testing (new TrayLiftTesting(motor, upper, raise, lower, util1))
{
  this->currentState = testing;
}

TrayLiftController::~TrayLiftController(void)
{
  delete testing;
}

void TrayLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
}
