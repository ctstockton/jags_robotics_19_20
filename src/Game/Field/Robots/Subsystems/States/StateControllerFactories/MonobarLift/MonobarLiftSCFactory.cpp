#include "MonobarLiftSCFactory.h"

MonobarLiftSCFactory::MonobarLiftSCFactory(void)
{}

MonobarLiftSCFactory::MonobarLiftSCFactory(std::string string, pros::Motor* left, pros::Motor* right, int position1, int speed1, int position2, int speed2, pros::controller_digital_e_t upButton, pros::controller_digital_e_t downButton)
{
  liftRelaxTwoStateMonobarLiftSCWrapper = new LiftRelaxTwoStateMonobarLiftSCWrapper();
  this->map["liftRelaxTwoStateMonobarLiftStateController"] = liftRelaxTwoStateMonobarLiftSCWrapper;

  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(left, right, position1, speed1, position2, speed2, upButton, downButton);
}

MonobarLiftSCFactory::~MonobarLiftSCFactory(void)
{
  delete liftRelaxTwoStateMonobarLiftSCWrapper;
}
