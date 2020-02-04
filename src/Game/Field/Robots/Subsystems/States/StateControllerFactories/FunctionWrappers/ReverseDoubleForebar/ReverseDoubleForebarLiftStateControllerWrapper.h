#ifndef REVERSE_DOUBLE_FOREBAR_LIFT_STATE_CONTROLLER_WRAPPER
#define REVERSE_DOUBLE_FOREBAR_LIFT_STATE_CONTROLLER_WRAPPER
#include "../StateControllerFactoryFunctionWrapper.h"

class ReverseDoubleForebarLiftStateControllerWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  ReverseDoubleForebarLiftStateControllerWrapper(void);
  virtual ~ReverseDoubleForebarLiftStateControllerWrapper(void);

  virtual StateController * getController(pros::Motor*, pros::Motor*, RobotDetails*) = 0;
};
#endif
