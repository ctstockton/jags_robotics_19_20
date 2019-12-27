#ifndef UNRESTRICT_TOGGLE_TRAYLIFT_CONTROLLER_WRAPPER_H
#define UNRESTRICT_TOGGLE_TRAYLIFT_CONTROLLER_WRAPPER_H
#include "TrayLiftStateControllerFactoryFunctionWrapper.h"
#include "../../../SubsystemStateControllers/TrayLiftControllers/UnrestrictToggleTrayLiftController.h"
class UnrestrictToggleTrayLiftControllerWrapper : public TrayLiftStateControllerFactoryFunctionWrapper
{
public:
  UnrestrictToggleTrayLiftControllerWrapper(void);
  ~UnrestrictToggleTrayLiftControllerWrapper(void);

  StateController * getController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
};
#endif
