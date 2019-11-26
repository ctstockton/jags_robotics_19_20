#include"DefaultObeyState.h"

DefaultObeyState::DefaultObeyState(void)
{}

DefaultObeyState::~DefaultObeyState(void)
{}

void DefaultObeyState::obey(pros::Controller master)
{
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
