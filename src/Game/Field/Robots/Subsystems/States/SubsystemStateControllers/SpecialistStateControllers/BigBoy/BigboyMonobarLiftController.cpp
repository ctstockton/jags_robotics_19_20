#include "BigboyMonobarLiftController.h"

BigboyMonobarLiftController::BigboyMonobarLiftController(void)
{}

BigboyMonobarLiftController::BigboyMonobarLiftController(pros::Motor* left, pros::Motor* right)
{
  this->currentState = &bigboy;
}

BigboyMonobarLiftController::~BigboyMonobarLiftController(void)
{}

void BigboyMonobarLiftController::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);
  switch (this->targetState){
    case 0: break;
  }
}
