#include "BigboyTrayLiftController.h"

BigboyTrayLiftController::BigboyTrayLiftController(void)
{}

BigboyTrayLiftController::BigboyTrayLiftController(pros::Motor* motor, int upper, pros::controller_digital_e_t raise, pros::controller_digital_e_t lower, pros::controller_digital_e_t util1, pros::controller_digital_e_t util2):
upperLimit (upper),
firstPosition (7500),
secondPosition (2500),
basicSet (true),
positionZero (new TrayLiftPositionZero(motor, 0, 100)),
positionOne (new TrayLiftPositionOne(motor, 6000, 100)),
stall (new TrayLiftStall(util2))
{
  this->testing = new TrayLiftTesting(motor, upper, raise, lower, util1);
  this->currentState = this->testing;
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
  if(basicSet){
    switch (this->targetState){
      case 0:
        break;
      case 1: this->currentState = positionOne;
        break;
      case 2: this->currentState = stall;
        basicSet = false;
        break;
      default:
        break;
      }
    }
  else{
    switch(this->targetState){
      case 9: this->currentState = positionZero;
        break;
      case 0: this->currentState = this->testing;
        basicSet = true;
        break;
      default:
        break;
    }

  }

}
