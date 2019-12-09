#include "BigboyTrayLiftController.h"

BigboyTrayLiftController::BigboyTrayLiftController(void)
{}

BigboyTrayLiftController::BigboyTrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2):
positionZero (new TrayLiftMoveThenReturn(motor, 0, 100, 4)),
positionOne (new TrayLiftMoveThenReturn(motor, 6000, 100, 2)),
stall (new TrayLiftStall(util2, 3)),
unrestricted (new TrayLiftUnrestrictedObey(motor, raise, lower, DIGITAL_RIGHT, 4))
{
  this->defaultState = new TrayLiftDefaultObey(motor, upper, raise, lower, util1, DIGITAL_LEFT, 5);
  this->currentState = this->defaultState;
}

BigboyTrayLiftController::~BigboyTrayLiftController(void)
{
  delete positionZero;
  delete positionOne;
  delete stall;
}

void BigboyTrayLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  std::cout << this->targetState << std::endl;
  switch (this->targetState){
    case 0:
      break;
    case 1: this->currentState = positionOne;
      break;
    case 2: this->currentState = stall;
      break;
    case 3: this->currentState = positionZero;
      break;
    case 4: this->currentState = this->defaultState;
      break;
    case 5: this->currentState = unrestricted;
    default:
      break;
  }

}
