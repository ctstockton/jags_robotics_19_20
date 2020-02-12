#ifndef MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_SC
#define MANUAL_CONTROL_LOWER_POINT_RELAX_REVERSE_DOUBLE_FOREBAR_LIFT_SC
#include "../ReverseDoubleForebarLiftSC.h"
#include "../../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftDefaultObey.h"
#include "../../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftRaiseObey.h"
#include "../../Subsystems/ReverseDoubleForebarLiftStates/ReverseDoubleForebarLiftLowerObey.h"

class ManualControlLowerPointRelaxRDFLSC : public ReverseDoubleForebarLiftSC
{
public:
  ManualControlLowerPointRelaxRDFLSC(void);
  ManualControlLowerPointRelaxRDFLSC(pros::Motor*, pros::Motor*, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~ManualControlLowerPointRelaxRDFLSC(void);

  void obey(pros::Controller);
private:
    ReverseDoubleForebarLiftDefaultObey * defaultState;
    ReverseDoubleForebarLiftRaiseObey * raiseState;
    ReverseDoubleForebarLiftLowerObey * lowerState;
};
#endif
