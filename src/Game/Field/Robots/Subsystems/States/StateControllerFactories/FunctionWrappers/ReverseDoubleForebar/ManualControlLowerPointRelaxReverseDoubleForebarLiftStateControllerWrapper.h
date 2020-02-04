#ifndef MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_CONTROLLER_WRAPPER
#define MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_CONTROLLER_WRAPPER
#include "ReverseDoubleForebarLiftStateControllerWrapper.h"
#include "../../../ManualControlLowerPointRelaxReverseDoubleForebarLiftController.h"
class ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper : public ReverseDoubleForebarLiftStateControllerWrapper
{
public:
  ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper(void);
  ~ManualControlLowerPointRelaxReverseDoubleForebarLiftStateControllerWrapper(void);

  StateController * getController(pros::Motor*, pros::Motor*, RobotDetails*);
};
#endif
