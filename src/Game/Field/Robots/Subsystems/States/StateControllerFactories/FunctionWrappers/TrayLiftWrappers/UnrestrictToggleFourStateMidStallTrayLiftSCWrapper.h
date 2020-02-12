#ifndef UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_SC_WRAPPER
#define UNRESTRICT_TOGGLE_FOUR_STATE_MID_STALL_TRAYLIFT_SC_WRAPPER
#include "TrayLiftSCWrapper.h"
#include "../../../SubsystemStateControllers/TrayLiftControllers/UnrestrictToggleFourStateMidStallTrayLiftSC.h"
class UnrestrictToggleFourStateMidStallTrayLiftSCWrapper : public TrayLiftSCWrapper
{
public:
  UnrestrictToggleFourStateMidStallTrayLiftSCWrapper(void);
  ~UnrestrictToggleFourStateMidStallTrayLiftSCWrapper(void);

  StateController * getController(pros::Motor*, RobotDetails*);
};
#endif
