#ifndef UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_CONTROLLER_WRAPPER
#define UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_CONTROLLER_WRAPPER
#include "TrayLiftStateControllerFactoryFunctionWrapper.h"
#include "../../../SubsystemStateControllers/TrayLiftControllers/UnrestrictToggleFourStateMidStallTrayLiftController.h"
class UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper : TrayLiftStateControllerFactoryFunctionWrapper
{
public:
  UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void);
  ~UnrestrictToggleFourStateMidStallTrayLiftControllerWrapper(void);

  StateController * getController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
};
#endif
