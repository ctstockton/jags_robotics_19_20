#include "ReverseDoubleForebarLiftStateControllerFactory.h"

ReverseDoubleForebarLiftStateControllerFactory::ReverseDoubleForebarLiftStateControllerFactory(void)
{}

ReverseDoubleForebarLiftStateControllerFactory::ReverseDoubleForebarLiftStateControllerFactory(std::string string, pros::Motor* left, pros::Motor* right, RobotDetails* details)
{
  manualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper = new ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper();
  this->map["manualControlLowerPointRelaxReverseDoubleForebarLiftStateController"] = manualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper;

  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(left, right, details);
}

ReverseDoubleForebarLiftStateControllerFactory::~ReverseDoubleForebarLiftStateControllerFactory(void)
{
  delete manualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper;
}
