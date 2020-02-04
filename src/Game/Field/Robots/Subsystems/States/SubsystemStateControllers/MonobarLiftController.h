#ifndef MONOBARLIFT_CONTROLLER_H
#define MONOBARLIFT_CONTROLLER_H
#include "AbstractControllers/LiftController.h"
class MonobarLiftController : public LiftController
{
public:
  MonobarLiftController(void);
  virtual ~MonobarLiftController(void);
};
#endif
