#ifndef LIFT_RELAX_TWO_STATE_MONOBAR_LIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPPER_H
#define LIFT_RELAX_TWO_STATE_MONOBAR_LIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPPER_H
#include "MonobarLiftStateControllerFactoryFunctionWrapper.h"
#include "../../../SubsystemStateControllers/MonobarLiftControllers/LiftRelaxTwoStateMonobarLiftController.h"
class LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper : public MonobarLiftStateControllerFactoryFunctionWrapper
{
public:
  LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper(void);
  ~LiftRelaxTwoStateMonobarLiftStateControllerFactoryFunctionWrapper(void);

  StateController * getController(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t);
};
#endif
