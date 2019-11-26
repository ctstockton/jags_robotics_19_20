#include "TrayLiftController.h"

TrayLiftController::TrayLiftController(void)
{}

TrayLiftController::TrayLiftController(pros::Motor* motor, int limit)
{
  testing.initialize(motor, limit);
  this->currentState = &testing;
}

TrayLiftController::~TrayLiftController(void)
{}

void TrayLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
  }
}
