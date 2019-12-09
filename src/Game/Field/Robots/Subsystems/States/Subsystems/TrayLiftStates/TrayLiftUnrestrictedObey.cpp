#include "TrayLiftUnrestrictedObey.h"

TrayLiftUnrestrictedObey::TrayLiftUnrestrictedObey(void)
{}

TrayLiftUnrestrictedObey::TrayLiftUnrestrictedObey(pros::Motor * motor, pros::controller_digital_e_t raiseInput, pros::controller_digital_e_t lowerInput, pros::controller_digital_e_t input, int input2):
raise (raiseInput),
lower (lowerInput),
returnButton (input)
{
  this->trayMotor = motor;
  this->returnValue = input2;
}

TrayLiftUnrestrictedObey::~TrayLiftUnrestrictedObey(void)
{}

void TrayLiftUnrestrictedObey::obey(pros::Controller master)
{
  if(master.get_digital(raise) == 1){
    trayMotor->move_relative(100, 100);
    trayMotor->tare_position();
  }
  else if(master.get_digital(lower) == 1){
    trayMotor->move(-100);
    trayMotor->tare_position();
  }
  else{}
}

int TrayLiftUnrestrictedObey::changeState(pros::Controller master)
{
  if(master.get_digital(returnButton) == 1){
    return returnValue;
  }
  else{
    return 0;
  }
}
