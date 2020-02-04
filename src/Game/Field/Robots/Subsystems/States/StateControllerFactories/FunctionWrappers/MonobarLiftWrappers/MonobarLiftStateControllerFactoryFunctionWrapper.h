#ifndef MONOBAR_LIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#define MONOBAR_LIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"

class MonobarLiftStateControllerFactoryFunctionWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  MonobarLiftStateControllerFactoryFunctionWrapper(void);
  virtual ~MonobarLiftStateControllerFactoryFunctionWrapper(void);

  virtual StateController * getController(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t) = 0;
};
#endif
