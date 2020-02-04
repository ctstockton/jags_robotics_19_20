#include "LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper.h"

LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper::LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper(void)
{}

LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper::~LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper(void)
{
  delete this->stateController;
}

StateController * LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper::getController(pros::Motor* left, pros::Motor* right, int position1, int speed1, int position2, int speed2, pros::controller_digital_e_t upButton, pros::controller_digital_e_t downButton)
{
  this->stateController = new LiftRelaxTwoStateMonobarLiftController(left, right, position1, speed1, position2, speed2, upButton, downButton);
  return this->stateController;
}
