#ifndef UNRESTRICT_TOGGLE_TRAYLIFT_SC_H
#define UNRESTRICT_TOGGLE_TRAYLIFT_SC_H
#include "../TrayLiftSC.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftUnrestrictedObey.h"
class UnrestrictToggleTrayLiftSC : public TrayLiftSC
{
public:
  UnrestrictToggleTrayLiftSC(void);
  UnrestrictToggleTrayLiftSC(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~UnrestrictToggleTrayLiftSC(void);

  void obey(pros::Controller);
private:
  TrayLiftUnrestrictedObey * unrestrictedState;
};
#endif
