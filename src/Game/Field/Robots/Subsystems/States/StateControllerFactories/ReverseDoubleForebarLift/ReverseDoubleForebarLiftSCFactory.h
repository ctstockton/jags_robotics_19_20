#ifndef REVERSE_DOUBLE_FOREBAR_LIFT_SC_FACTORY
#define REVERSE_DOUBLE_FOREBAR_LIFT_SC_FACTORY
#include "../StateControllerFactory.h"
#include "../FunctionWrappers/ReverseDoubleForebar/ReverseDoubleForebarLiftSCWrapper.h"
#include "../FunctionWrappers/ReverseDoubleForebar/ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper.h"

class ReverseDoubleForebarLiftSCFactory : public StateControllerFactory
{
public:
  ReverseDoubleForebarLiftSCFactory(void);
  ReverseDoubleForebarLiftSCFactory(std::string, pros::Motor*, pros::Motor*, RobotDetails*);
  ~ReverseDoubleForebarLiftSCFactory(void);

private:
  std::map<std::string, ReverseDoubleForebarLiftSCWrapper*> map;
  ReverseDoubleForebarLiftSCWrapper * wrapper;
  ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper * manualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper;
};
#endif
