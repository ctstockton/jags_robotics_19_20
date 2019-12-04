#include "MonobarLiftBigboyCustom.h"

MonobarLiftBigboyCustom::MonobarLiftBigboyCustom(void)
{}

MonobarLiftBigboyCustom::~MonobarLiftBigboyCustom(void)
{}

void MonobarLiftBigboyCustom::obey(pros::Controller master)
{

  if(master.get_digital(DIGITAL_L2) == 1)
  {
    leftMotor->move_absolute(0, 20);
    rightMotor->move_absolute(0, 20);
  }
  else if(master.get_digital(DIGITAL_L1) == 1)
  {
    leftMotor->move_absolute(1200, 20);
    rightMotor->move_absolute(1200, 20);
  }


}

int MonobarLiftBigboyCustom::changeState(pros::Controller)
{
  return 0;
}
