#include "ObeyStateController.h"

ObeyStateController::ObeyStateController(void)
{
  std::cout << this->currentState << std::endl;
  this->currentState = &this->defaultState;
}

ObeyStateController::~ObeyStateController(void)
{}

void ObeyStateController::obey(pros::Controller master)
{std::cout << this->currentState << std::endl;
  this->currentState = &this->defaultState;
  std::cout << this->currentState << std::endl;
  bool obeyLoop = true;
  while(obeyLoop){
    //std::cout << "while loop executing\n";
    currentState->obey(master, this->subsystemList);
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


void ObeyStateController::setSubsystemList(Subsystem ** input)
{
  this->subsystemList = input;
}
