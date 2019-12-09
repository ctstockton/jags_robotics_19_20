#ifndef SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTTESTING_H
#define SUBSYSTEMS_TRAYLIFTSTATES_TRAYLIFTTESTING_H
#include "TrayLiftState.h"
class TrayLiftTesting : public TrayLiftState
{
public:
  TrayLiftTesting(void);
  TrayLiftTesting(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t);
  ~TrayLiftTesting(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
private:
  pros::controller_digital_e_t raise;
  pros::controller_digital_e_t lower;
  pros::controller_digital_e_t util1;
};
#endif
