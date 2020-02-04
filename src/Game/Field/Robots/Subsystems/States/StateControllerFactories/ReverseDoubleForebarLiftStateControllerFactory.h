#ifndef REVERSE_DOUBLE_FOREBAR_LIFT_STATE_CONTROLLER_FACTORY
#define REVERSE_DOUBLE_FOREBAR_LIFT_STATE_CONTROLLER_FACTORY
#include "StateControllerFactory.h"
#include "FunctionWrappers/ReverseDoubleForebar/ReverseDoubleForebarLiftStateControllerWrapper.h"
#include "FunctionWrappers/ReverseDoubleForebar/ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper.h"

class ReverseDoubleForebarLiftStateControllerFactory : public StateControllerFactory
{
public:
  ReverseDoubleForebarLiftStateControllerFactory(void);
  ReverseDoubleForebarLiftStateControllerFactory(std::string, pros::Motor*, pros::Motor*, RobotDetails*);
  ~ReverseDoubleForebarLiftStateControllerFactory(void);

private:
  std::map<std::string, ReverseDoubleForebarLiftStateControllerWrapper*> map;
  ReverseDoubleForebarLiftStateControllerWrapper * wrapper;
  ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper * manualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper;
};
#endif
