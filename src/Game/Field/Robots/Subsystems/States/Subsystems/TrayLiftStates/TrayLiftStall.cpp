#include "TrayLiftStall.h"

TrayLiftStall::TrayLiftStall(void)
{}

TrayLiftStall::~TrayLiftStall(void)
{}

void TrayLiftStall::obey(pros::Controller master)
{
  std::cout << "Position stall\n";
}

int TrayLiftStall::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_L2) == 1){
    return 9;
  }
  else{
    return 2;
  }
}
