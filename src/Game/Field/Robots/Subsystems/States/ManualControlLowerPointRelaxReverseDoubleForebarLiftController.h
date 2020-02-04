#ifndef MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_CONTROLLER
#define MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_CONTROLLER
#include "SubsystemStateControllers/ReverseDoubleForebarLiftController.h"
#include "Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftDefaultObey.h"
#include "Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftRaiseObey.h"
#include "Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftLowerObey.h"

class ManualControlLowerPointRelaxReverseDoubleForebarLiftController : public ReverseDoubleForebarLiftController
{
public:
  ManualControlLowerPointRelaxReverseDoubleForebarLiftController(void);
  ManualControlLowerPointRelaxReverseDoubleForebarLiftController(pros::Motor*, pros::Motor*, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~ManualControlLowerPointRelaxReverseDoubleForebarLiftController(void);

  void obey(pros::Controller);
private:
    ReverseDoubleForebarLiftDefaultObey * defaultState;
    ReverseDoubleForebarLiftRaiseObey * raiseState;
    ReverseDoubleForebarLiftLowerObey * lowerState;
};
#endif
