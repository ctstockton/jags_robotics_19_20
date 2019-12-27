#ifndef BIGBOY_CUSTOM_TRAY_LIFT_DEFAULT_OBEY_H
#define BIGBOY_CUSTOM_TRAY_LIFT_DEFAULT_OBEY_H
#include "../../TrayLiftState.h"
class BigboyCustomTrayLiftDefaultObey : public TrayLiftState
{
public:
  BigboyCustomTrayLiftDefaultObey(void);
  BigboyCustomTrayLiftDefaultObey(pros::Motor);
  ~BigboyCustomTrayLiftDefaultObey(void);

  void obey(pros::Controller);
  int changeState(pros::Controller);
};
#endif
