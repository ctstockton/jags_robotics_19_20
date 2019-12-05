#include "ReverseDoubleForebarController.h"

ReverseDoubleForebarController::ReverseDoubleForebarController(void)
{}

ReverseDoubleForebarController::ReverseDoubleForebarController(pros::Motor* left, pros::Motor* right):
raiseState (new ReverseDoubleForebarLiftRaiseObey(left, right)),
lowerState (new ReverseDoubleForebarLiftLowerObey(left, right)),
defaultState (new ReverseDoubleForebarLiftDefaultObey(left, right))
{
  this->currentState = defaultState;
}

ReverseDoubleForebarController::~ReverseDoubleForebarController(void)
{}

void ReverseDoubleForebarController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);

  if(master.get_digital(DIGITAL_L1) == 1){
    this->currentState = raiseState;
    raiseState->setPosition(this->targetState);
  }
  else if(master.get_digital(DIGITAL_L2) == 1){
    this->currentState = lowerState;
    lowerState->setPosition(this->targetState);
  }
  else{
    this->currentState = defaultState;
    defaultState->setPosition(this->targetState);
  }

}
