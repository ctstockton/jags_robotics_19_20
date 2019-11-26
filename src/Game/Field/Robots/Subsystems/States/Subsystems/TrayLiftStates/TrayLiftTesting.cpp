#include "TrayLiftTesting.h"

TrayLiftTesting::TrayLiftTesting(void)
{}

TrayLiftTesting::TrayLiftTesting(pros::Motor * motor, int limit)
{
  this->trayMotor = motor;
  this->trayUpperLimit = limit;
}

TrayLiftTesting::~TrayLiftTesting(void)
{}

void TrayLiftTesting::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_X) == 1){
    trayMotor->move_absolute(this->trayUpperLimit, 100);
  }
  else if(master.get_digital(DIGITAL_Y) == 1){
    trayMotor->move_absolute(0, -100);
  }
  else{
    trayMotor->move(0);
  }
}

int TrayLiftTesting::changeState(pros::Controller master)
{
    return 0;
}
