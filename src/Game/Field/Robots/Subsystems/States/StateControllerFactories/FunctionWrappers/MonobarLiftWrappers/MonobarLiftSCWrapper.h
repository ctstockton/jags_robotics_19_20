#ifndef MONOBAR_LIFT_STATE_SC_WRAPPER_H
#define MONOBAR_LIFT_STATE_SC_WRAPPER_H
#include "../StateControllerFactoryFunctionWrapper.h"

class MonobarLiftSCWrapper : public StateControllerFactoryFunctionWrapper
{
public:
  MonobarLiftSCWrapper(void);
  virtual ~MonobarLiftSCWrapper(void);

  virtual StateController * getController(pros::Motor*, pros::Motor*, int, int, int, int, pros::controller_digital_e_t, pros::controller_digital_e_t) = 0;
};
#endif
