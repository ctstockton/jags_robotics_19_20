#ifndef UNRESTRICT_TOGGLE_TRAYLIFT_SC_WRAPPER_H
#define UNRESTRICT_TOGGLE_TRAYLIFT_SC_WRAPPER_H
#include "TrayLiftSCWrapper.h"
#include "../../../SubsystemStateControllers/TrayLiftControllers/UnrestrictToggleTrayLiftSC.h"
class UnrestrictToggleTrayLiftSCWrapper : public TrayLiftSCWrapper
{
public:
  UnrestrictToggleTrayLiftSCWrapper(void);
  ~UnrestrictToggleTrayLiftSCWrapper(void);

  StateController * getController(pros::Motor*, RobotDetails*);
};
#endif
