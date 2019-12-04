#include "TrayLiftPositionOne.h"

TrayLiftPositionOne::TrayLiftPositionOne(void)
{}

TrayLiftPositionOne::TrayLiftPositionOne(pros::Motor* motor, int position, int speed)
{
  this->trayMotor = motor;
  this->position = position;
  this->speed = speed;
}

TrayLiftPositionOne::~TrayLiftPositionOne(void)
{}

void TrayLiftPositionOne::obey(pros::Controller master)
{
  this->trayMotor->move_absolute(position, speed);
  std::cout << "Position one\n";
  std::cout << this->trayMotor->get_position() << std::endl;
}

int TrayLiftPositionOne::changeState(pros::Controller master)
{
  if((this->trayMotor->get_position()>(position-100)) && (this->trayMotor->get_position()<(position+100))){
    return 2;
  }
  else{
    return 1;
  }
}
