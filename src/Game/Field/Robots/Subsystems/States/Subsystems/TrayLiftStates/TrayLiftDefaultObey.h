#ifndef TRAYLIFT_DEFAULT_OBEY_H
#define TRAYLIFT_DEFAULT_OBEY_H
#include "TrayLiftState.h"
class TrayLiftDefaultObey : public TrayLiftState
{
public:
  TrayLiftDefaultObey(void);
  TrayLiftDefaultObey(pros::Motor*, int, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, pros::controller_digital_e_t, int);
  ~TrayLiftDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
private:
  pros::controller_digital_e_t raise;
  pros::controller_digital_e_t lower;
  pros::controller_digital_e_t util1;
  pros::controller_digital_e_t util2;
};
#endif
