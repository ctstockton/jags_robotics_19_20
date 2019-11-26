#include "ReverseDoubleForebarController.h"

ReverseDoubleForebarController::ReverseDoubleForebarController(void)
{}

ReverseDoubleForebarController::ReverseDoubleForebarController(pros::Motor* left, pros::Motor* right)
{
  defaultState.setMotors(left, right);
  this->currentState = &defaultState;
}

ReverseDoubleForebarController::~ReverseDoubleForebarController(void)
{}

void ReverseDoubleForebarController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
  }
}
