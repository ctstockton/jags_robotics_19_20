#ifndef STATE_CONTROLLER_FACTORY_H
#define STATE_CONTROLLER_FACTORY_H
#include "main.h"
#include "../StateController.h"
#include "FunctionWrappers/StateControllerFactoryFunctionWrapper.h"
#include <string>
#include <map>
class StateControllerFactory
{
public:
  StateControllerFactory(void);
  virtual ~StateControllerFactory(void);
  StateController * getController(void);
protected:
  StateController * stateController;
};
#endif
