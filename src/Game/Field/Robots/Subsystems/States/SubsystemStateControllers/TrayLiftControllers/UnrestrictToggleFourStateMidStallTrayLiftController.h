#ifndef UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_CONTROLLER_H
#define UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_CONTROLLER_H
#include "../TrayLiftController.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftMoveThenReturn.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftUnrestrictedObey.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftStall.h"
class UnrestrictToggleFourStateMidStallTrayLiftController : public TrayLiftController
{
public:
  UnrestrictToggleFourStateMidStallTrayLiftController(void);
  UnrestrictToggleFourStateMidStallTrayLiftController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~UnrestrictToggleFourStateMidStallTrayLiftController(void);

  void obey(pros::Controller);
private:
  TrayLiftMoveThenReturn * positionZero;
  TrayLiftMoveThenReturn * positionOne;
  TrayLiftUnrestrictedObey * unrestricted;
  TrayLiftStall * stall;
};
#endif
