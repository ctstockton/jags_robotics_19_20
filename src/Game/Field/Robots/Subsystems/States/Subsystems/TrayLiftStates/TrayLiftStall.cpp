#include "TrayLiftStall.h"

TrayLiftStall::TrayLiftStall(void)
{}

TrayLiftStall::TrayLiftStall(pros::controller_digital_e_t util2, int input):
util (util2)
{
  this->returnValue = input;
}

TrayLiftStall::~TrayLiftStall(void)
{}

void TrayLiftStall::obey(pros::Controller master)
{}

int TrayLiftStall::changeState(pros::Controller master)
{
  if(master.get_digital(util) == 1){
    return returnValue;
  }
  else{
    return 0;
  }
}
