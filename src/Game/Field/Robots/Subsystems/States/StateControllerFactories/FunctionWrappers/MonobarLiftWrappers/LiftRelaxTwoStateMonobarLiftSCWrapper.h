#ifndef LIFT_RELAX_TWO_STATE_MONOBAR_LIFT_STATE_SC_WRAPPPER_H
#define LIFT_RELAX_TWO_STATE_MONOBAR_LIFT_STATE_SC_WRAPPPER_H
#include "MonobarLiftSCWrapper.h"
#include "../../../SubsystemStateControllers/MonobarLiftControllers/LiftRelaxTwoStateMonobarLiftSC.h"
class LiftRelaxTwoStateMonobarLiftSCWrapper : public MonobarLiftSCWrapper
{
public:
  LiftRelaxTwoStateMonobarLiftSCWrapper(void);
  ~LiftRelaxTwoStateMonobarLiftSCWrapper(void);

  StateController * getController(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
};
#endif
