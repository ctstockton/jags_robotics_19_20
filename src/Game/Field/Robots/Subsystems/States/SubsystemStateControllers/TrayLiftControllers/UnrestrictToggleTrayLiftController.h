#ifndef UNRESTRICT_TOGGLE_TRAYLIFT_CONTROLLER_H
#define UNRESTRICT_TOGGLE_TRAYLIFT_CONTROLLER_H
#include "../TrayLiftController.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftUnrestrictedObey.h"
class UnrestrictToggleTrayLiftController : public TrayLiftController
{
public:
  UnrestrictToggleTrayLiftController(void);
  UnrestrictToggleTrayLiftController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~UnrestrictToggleTrayLiftController(void);

  void obey(pros::Controller);
private:
  TrayLiftUnrestrictedObey * unrestrictedState;
};
#endif
