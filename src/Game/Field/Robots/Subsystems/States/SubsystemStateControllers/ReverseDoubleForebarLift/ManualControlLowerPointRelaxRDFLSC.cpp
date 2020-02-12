#include "ManualControlLowerPointRelaxRDFLSC.h"

ManualControlLowerPointRelaxRDFLSC::ManualControlLowerPointRelaxRDFLSC(void)
{}

ManualControlLowerPointRelaxRDFLSC::ManualControlLowerPointRelaxRDFLSC(pros::Motor* left, pros::Motor* right, int relaxLimit, int raiseSpeed, int lowerSpeed, pros::controller_digital_e_t up, pros::controller_digital_e_t down):
raiseState (new ReverseDoubleForebarLiftRaiseObey(left, right, raiseSpeed, up)),
lowerState (new ReverseDoubleForebarLiftLowerObey(left, right, lowerSpeed, down)),
defaultState (new ReverseDoubleForebarLiftDefaultObey(left, right, relaxLimit))
{
  this->currentState = defaultState;
}

ManualControlLowerPointRelaxRDFLSC::~ManualControlLowerPointRelaxRDFLSC(void)
{
  delete raiseState;
  delete lowerState;
  delete defaultState;
}

void ManualControlLowerPointRelaxRDFLSC::obey(pros::Controller master)
{
  this->currentState->obey(master);
  this->targetState = this->currentState->changeState(master);

  if(master.get_digital(DIGITAL_L1) == 1){
    this->currentState = raiseState;
    raiseState->setPosition(this->targetState);
  }
  else if(master.get_digital(DIGITAL_L2) == 1){
    this->currentState = lowerState;
    lowerState->setPosition(this->targetState);
  }
  else{
    this->currentState = defaultState;
    defaultState->setPosition(this->targetState);
  }
}
