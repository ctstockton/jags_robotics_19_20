#include "TrayLiftDefaultObey.h"

TrayLiftDefaultObey::TrayLiftDefaultObey(void)
{}

TrayLiftDefaultObey::TrayLiftDefaultObey(pros::Motor * motor, int input, pros::controller_digital_e_t raiseInput, pros::controller_digital_e_t lowerInput, pros::controller_digital_e_t util1Input, pros::controller_digital_e_t util2Input, int returnInput):
raise (raiseInput),
lower (lowerInput),
util1 (util1Input),
util2 (util2Input)
{
  this->trayMotor = motor;
  this->position = input;
  this->returnValue = returnInput;
}

TrayLiftDefaultObey::~TrayLiftDefaultObey(void)
{}

void TrayLiftDefaultObey::obey(pros::Controller master)
{
  if(master.get_digital(raise) == 1){
    trayMotor->move_absolute(1*(this->position), 127);
  }
  else if(master.get_digital(lower) == 1){
    trayMotor->move_absolute(0, -127);
  }
  else{
    trayMotor->move(0);
  }
  std::cout << "Position testing\n";
}

int TrayLiftDefaultObey::changeState(pros::Controller master)
{
  if(master.get_digital(util1) == 1){
    return 1;
  }
  else if(master.get_digital_new_press(util2) == 1)
  {
    return returnValue;
  }
  else{
    return 0;
  }
}
