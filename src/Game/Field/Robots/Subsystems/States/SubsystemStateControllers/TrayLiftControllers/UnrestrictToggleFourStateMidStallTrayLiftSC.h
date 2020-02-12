#ifndef UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_SC_H
#define UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_SC_H
#include "../TrayLiftSC.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftMoveThenReturn.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftUnrestrictedObey.h"
#include "../../Subsystems/TrayLiftStates/TrayLiftStall.h"
class UnrestrictToggleFourStateMidStallTrayLiftSC : public TrayLiftSC
{
public:
  UnrestrictToggleFourStateMidStallTrayLiftSC(void);
  UnrestrictToggleFourStateMidStallTrayLiftSC(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~UnrestrictToggleFourStateMidStallTrayLiftSC(void);

  void obey(pros::Controller);
private:
  TrayLiftMoveThenReturn * positionZero;
  TrayLiftMoveThenReturn * positionOne;
  TrayLiftUnrestrictedObey * unrestricted;
  TrayLiftStall * stall;
};
#endif
