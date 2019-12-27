#ifndef STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#define STATE_CONTROLLER_FACTORY_FUNCTION_WRAPPER_H
#include "../../StateController.h"
class StateControllerFactoryFunctionWrapper
{
public:
  StateControllerFactoryFunctionWrapper(void);
  virtual ~StateControllerFactoryFunctionWrapper(void);

protected:
  StateController * stateController;
};
#endif
