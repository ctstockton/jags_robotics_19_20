#include "Testing.h"

Testing::Testing(void)
{}

Testing::Testing(pros::Motor * motor, int limit)
{
  this->trayMotor = motor;
  this->trayUpperLimit = limit;
}

Testing::~Testing(void);

void Testing::obey(pros::Controller master)
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

int Testing::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_LEFT) == 1 && master.get_digital(DIGITAL_RIGHT) = 1)
  {
    
  }
}
