#include"DefaultObeyState.h"

DefaultObeyState::DefaultObeyState(void)
{}

DefaultObeyState::~DefaultObeyState(void)
{}

void DefaultObeyState::obey(pros::Controller master, Subsystem ** subsystemList)
{
  int i = 0;
  while(subsystemList[i] != 0){
    subsystemList[i]->obey(master);
    i++;
  }
}

int DefaultObeyState::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_DOWN)){
    return 2;
  }
  else{
    return 0;
  }
}
