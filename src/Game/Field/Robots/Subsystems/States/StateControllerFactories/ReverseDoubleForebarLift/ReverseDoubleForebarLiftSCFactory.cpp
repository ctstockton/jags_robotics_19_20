#include "ReverseDoubleForebarLiftSCFactory.h"

ReverseDoubleForebarLiftSCFactory::ReverseDoubleForebarLiftSCFactory(void)
{}

ReverseDoubleForebarLiftSCFactory::ReverseDoubleForebarLiftSCFactory(std::string string, pros::Motor* left, pros::Motor* right, RobotDetails* details)
{
  manualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper = new ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper();
  this->map["manualControlLowerPointRelaxReverseDoubleForebarLiftStateController"] = manualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper;

  this->wrapper = map[string];
  this->stateController = this->wrapper->getController(left, right, details);
}

ReverseDoubleForebarLiftSCFactory::~ReverseDoubleForebarLiftSCFactory(void)
{
  delete manualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper;
}
