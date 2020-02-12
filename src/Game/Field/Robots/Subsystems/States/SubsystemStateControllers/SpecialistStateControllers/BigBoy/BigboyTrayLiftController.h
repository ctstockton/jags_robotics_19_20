#ifndef SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYTRAYLIFT_H
#define SPECIALISTSTATECONTROLLERS_BIGBOY_BIGBOYTRAYLIFT_H
#include "../../../Subsystems/TrayLiftStates/TrayLiftMoveThenReturn.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftUnrestrictedObey.h"
#include "../../../Subsystems/TrayLiftStates/TrayLiftStall.h"
class BigboyTrayLiftController
{
public:
  BigboyTrayLiftController(void);
  BigboyTrayLiftController(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~BigboyTrayLiftController(void);

  void obey(pros::Controller);
private:
  TrayLiftMoveThenReturn * positionZero;
  TrayLiftMoveThenReturn * positionOne;
  TrayLiftUnrestrictedObey * unrestricted;
  TrayLiftStall * stall;
  int i;
};
#endif
