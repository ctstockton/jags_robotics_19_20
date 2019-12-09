#include "TrayLiftMoveThenReturn.h"

TrayLiftMoveThenReturn::TrayLiftMoveThenReturn(void)
{}

TrayLiftMoveThenReturn::TrayLiftMoveThenReturn(pros::Motor * motor, int input1, int input2, int input3)
{
  this->trayMotor = motor;
  this->position = input1;
  this->speed = input2;
  this->returnValue = input3;
}

TrayLiftMoveThenReturn::~TrayLiftMoveThenReturn(void)
{}

void TrayLiftMoveThenReturn::obey(pros::Controller)
{
  this->trayMotor->move_absolute(position, speed);
}

int TrayLiftMoveThenReturn::changeState(pros::Controller)
{
  if((this->trayMotor->get_position()>position-20) && (this->trayMotor->get_position()<position+20)){
    return returnValue;
  }
  else{
    return 0;
  }
}
