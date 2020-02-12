#include "ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper.h"

ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper::ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper(void)
{}

ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper::~ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper(void)
{
  delete this->stateController;
}

StateController * ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper::getController(pros::Motor* left, pros::Motor* right, RobotDetails* details)
{
  this->stateController = new ManualControlLowerPointRelaxRDFLSC(left, right, details->getLiftLimit(), details->getLiftRaiseSpeed(), details->getLiftLowerSpeed(), details->getLiftUp(), details->getLiftDown());
  return this->stateController;
}
