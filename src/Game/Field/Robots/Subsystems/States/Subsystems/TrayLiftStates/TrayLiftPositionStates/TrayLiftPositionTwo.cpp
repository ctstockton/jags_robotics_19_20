#include "TrayLiftPositionTwo.h"

TrayLiftPositionTwo::TrayLiftPositionTwo(void)
{}

TrayLiftPositionTwo::TrayLiftPositionTwo(pros::Motor* motor, int position, int speed)
{
  this->trayMotor = motor;
  this->position = position;
  this->speed = speed;
}

TrayLiftPositionTwo::~TrayLiftPositionTwo(void)
{}

void TrayLiftPositionTwo::obey(pros::Controller master)
{
  this->trayMotor->move_absolute(position, speed);
}

int TrayLiftPositionTwo::changeState(pros::Controller master)
{
  if((this->trayMotor->get_position()==position-100) || (this->trayMotor->get_position()==position+100)){
    return 3;
  }
  else{
    return 2;
  }
}
