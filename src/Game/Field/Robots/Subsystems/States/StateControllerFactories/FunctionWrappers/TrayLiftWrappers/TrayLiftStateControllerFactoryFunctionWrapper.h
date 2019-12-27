#ifndef TRAYLIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#define TRAYLIFT_STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"
class TrayLiftStateControllerFactoryFunctionWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  TrayLiftStateControllerFactoryFunctionWrapper(void);
  virtual ~TrayLiftStateControllerFactoryFunctionWrapper(void);

  virtual StateController * getController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t) = 0;
};
#endif
