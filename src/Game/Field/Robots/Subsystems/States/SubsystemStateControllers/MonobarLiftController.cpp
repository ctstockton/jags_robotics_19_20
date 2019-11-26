#include "MonobarLiftController.h"

MonobarLiftController::MonobarLiftController(void)
{}

MonobarLiftController::MonobarLiftController(pros::Motor* left, pros::Motor* right)
{
  defaultState.setMotors(left, right);
  this->currentState = &bigboy;
}

MonobarLiftController::~MonobarLiftController(void)
{}

void MonobarLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
  }
}
