#ifndef REVERSE_DOUBLE_FOREBAR_LIFT_SC_WRAPPER
#define REVERSE_DOUBLE_FOREBAR_LIFT_SC_WRAPPER
#include "../StateControllerFactoryFunctionWrapper.h"

class ReverseDoubleForebarLiftSCWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  ReverseDoubleForebarLiftSCWrapper(void);
  virtual ~ReverseDoubleForebarLiftSCWrapper(void);

  virtual StateController * getController(pros::Motor*, pros::Motor*, RobotDetails*) = 0;
};
#endif
