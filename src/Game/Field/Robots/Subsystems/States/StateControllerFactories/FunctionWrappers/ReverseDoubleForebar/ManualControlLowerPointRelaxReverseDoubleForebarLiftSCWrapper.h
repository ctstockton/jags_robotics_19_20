#ifndef MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_SC_WRAPPER
#define MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_SC_WRAPPER
#include "ReverseDoubleForebarLiftSCWrapper.h"
#include "../../../SubsystemStateControllers/ReverseDoubleForebarLift/ManualControlLowerPointRelaxRDFLSC.h"
class ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper : public ReverseDoubleForebarLiftSCWrapper
{
public:
  ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper(void);
  ~ManualControlLowerPointRelaxReverseDoubleForebarLiftSCWrapper(void);

  StateController * getController(pros::Motor*, pros::Motor*, RobotDetails*);
};
#endif
