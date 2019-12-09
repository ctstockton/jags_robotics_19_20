#ifndef TRAYLIFT_UNRESTRICTED_OBEY_H
#define TRAYLIFT_UNRESTRICTED_OBEY_H
#include "TrayLiftState.h"
class TrayLiftUnrestrictedObey : public TrayLiftState
{
public:
  TrayLiftUnrestrictedObey(void);
  TrayLiftUnrestrictedObey(pros::Motor*, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, int);
  ~TrayLiftUnrestrictedObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
private:
  pros::controller_digital_e_t raise;
  pros::controller_digital_e_t lower;
  pros::controller_digital_e_t returnButton;
};
#endif
