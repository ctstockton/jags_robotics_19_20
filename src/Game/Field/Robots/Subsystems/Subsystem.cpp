#include "main.h"
#include "Subsystem.h"

Subsystem::Subsystem(void)
{}

Subsystem::~Subsystem(void)
{}

void Subsystem::setStateController(StateController * control)
{
  this->stateController = control;
}
