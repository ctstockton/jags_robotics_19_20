#ifndef STATES_SUBSYSTEMSTATECONTROLLERS_MONOBARLIFTCONTROLLER_H
#define STATES_SUBSYSTEMSTATECONTROLLERS_MONOBARLIFTCONTROLLER_H
#include "../StateController.h"
#include "main.h"
class MonobarLiftController : public StateController
{
public:
  MonobarLiftController(void);
  virtual ~MonobarLiftController(void);
};
#endif
