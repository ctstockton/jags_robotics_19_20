#include "ObeyStateController.h"

ObeyStateController::ObeyStateController(void)
{
  std::cout << this->currentState << std::endl;
  this->currentState = &this->defaultState;
}

ObeyStateController::~ObeyStateController(void)
{}

void ObeyStateController::obey(pros::Controller master)
{
  this->currentState = &this->defaultState;
  bool obeyLoop = true;
  while(obeyLoop){
    currentState->obey(master);
    targetState = this->currentState->changeState(master);
    switch(targetState){
      case 0:
      break;
      case 1:
      currentState = &defaultState;
      break;
      case 2:
      currentState = &scoringState;
      break;
    }
    pros::delay(2);
  }
}
