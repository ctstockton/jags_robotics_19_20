#include "TrayLiftPositionZero.h"

TrayLiftPositionZero::TrayLiftPositionZero(void)
{}

TrayLiftPositionZero::TrayLiftPositionZero(pros::Motor* motor, int position, int speed)
{
  this->trayMotor = motor;
  this->position = position;
  this->speed = speed;
}

TrayLiftPositionZero::~TrayLiftPositionZero(void)
{}

void TrayLiftPositionZero::obey(pros::Controller master)
{
  this->trayMotor->move_absolute(position, speed);
  std::cout << "Position zero\n";
}

int TrayLiftPositionZero::changeState(pros::Controller master)
{
  if((this->trayMotor->get_position()>position-100) && (this->trayMotor->get_position()<position+100)){
    return 0;
  }
  else{
    return 1;
  }
}
