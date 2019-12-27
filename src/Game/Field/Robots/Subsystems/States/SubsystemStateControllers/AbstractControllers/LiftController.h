#ifndef LIFT_CONTROLLER_H
#define LIFT_CONTROLLER_H
#include "../../StateController.h"
class LiftController : public StateController
{
public:
  LiftController(void);
  virtual ~LiftController(void);
};
#endif
