#include "ScoringObeyState.h"

ScoringObeyState::ScoringObeyState(void)
{}

ScoringObeyState::~ScoringObeyState(void)
{}

void ScoringObeyState::obey(pros::Controller master, Subsystem ** subsystemList)
{
  int i = 0;
  while(subsystemList[i] != 0){
    subsystemList[i]->scoringObey(master);
    i++;
  }
}

int ScoringObeyState::changeState(pros::Controller master)
{
  if(master.get_digital(DIGITAL_UP)){
    return 1;
  }
  else{
    return 0;
  }
}
