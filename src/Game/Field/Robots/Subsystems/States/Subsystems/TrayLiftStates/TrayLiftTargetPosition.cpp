#include "TrayLiftTargetPosition.h"

TrayLiftTargetPosition::TrayLiftTargetPosition(void)
{}

TrayLiftTargetPosition::TrayLiftTargetPosition(pros::Motor* motor, int position, int input):
  speed (input)
{
  this->trayMotor = motor;
  this->position = position;
}

TrayLiftTargetPosition::~TrayLiftTargetPosition(void)
{}

void TrayLiftTargetPosition::obey(pros::Controller master)
{
  this->trayMotor->move_absolute(position, speed);
}

int TrayLiftTargetPosition::changeState(pros::Controller master)
{
  if(this->trayMotor->get_position()==position){
    return 1;
  }
  else{
    return 0;
  }
}
