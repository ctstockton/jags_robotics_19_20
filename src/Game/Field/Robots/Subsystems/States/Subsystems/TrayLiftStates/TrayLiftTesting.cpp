#include "TrayLiftTesting.h"

TrayLiftTesting::TrayLiftTesting(void)
{}

TrayLiftTesting::TrayLiftTesting(pros::Motor * motor, int input, pros::controller_digital_e_t raiseString, pros::controller_digital_e_t lowerString, pros::controller_digital_e_t util1String):
raise (raiseString),
lower (lowerString),
util1 (util1String)
{
  this->trayMotor = motor;
  this->position = input;
}

TrayLiftTesting::~TrayLiftTesting(void)
{}

void TrayLiftTesting::obey(pros::Controller master)
{
  if(master.get_digital(raise) == 1){
    trayMotor->move_absolute(1*(this->position), 100);
  }
  else if(master.get_digital(lower) == 1){
    trayMotor->move_absolute(0, -100);
  }
  else{
    trayMotor->move(0);
  }
  std::cout << "Position testing\n";
}

int TrayLiftTesting::changeState(pros::Controller master)
{
  if(master.get_digital(util1) == 1){
    return 1;
  }
  else{
    return 0;
  }
}
