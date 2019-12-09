#include "TrayLiftStall.h"

TrayLiftStall::TrayLiftStall(void)
{}

TrayLiftStall::TrayLiftStall(pros::controller_digital_e_t util2):
util (util2)
{}

TrayLiftStall::~TrayLiftStall(void)
{}

void TrayLiftStall::obey(pros::Controller master)
{
  std::cout << "Position stall\n";
}

int TrayLiftStall::changeState(pros::Controller master)
{
  if(master.get_digital(util) == 1){
    return 9;
  }
  else{
    return 2;
  }
}
