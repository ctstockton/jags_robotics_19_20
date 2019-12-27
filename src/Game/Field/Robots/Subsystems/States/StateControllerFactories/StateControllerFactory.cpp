#include "StateControllerFactory.h"

StateControllerFactory::StateControllerFactory(void)
{}

StateControllerFactory::~StateControllerFactory(void)
{}

StateController * StateControllerFactory::getController(void)
{
  return stateController;
}
