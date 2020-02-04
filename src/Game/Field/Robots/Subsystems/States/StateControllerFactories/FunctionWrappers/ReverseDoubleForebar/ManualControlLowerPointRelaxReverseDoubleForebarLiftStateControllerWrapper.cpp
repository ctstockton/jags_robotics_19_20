#include "ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper.h"

ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper::ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper(void)
{}

ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper::~ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper(void)
{
  delete this->stateController;
}

StateController * ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper::getController(pros::Motor* left, pros::Motor* right, RobotDetails* details)
{
  this->stateController = new ManualControlLowerPointRelaxReverseDoubleForebarLiftController(left, right, details->getLiftLimit(), details->getLiftRaiseSpeed(), details->getLiftLowerSpeed(), details->getLiftUp(), details->getLiftDown());
  return this->stateController;
}
