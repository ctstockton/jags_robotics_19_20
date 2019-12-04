#include "TwoMotorMonobarLift.h"
#include "main.h"

TwoMotorMonobarLift::TwoMotorMonobarLift(void)
{}

TwoMotorMonobarLift::TwoMotorMonobarLift(int L1, int R1, pros::motor_gearset_e gear)
{
  this->leftLiftUp = new pros::Motor(L1, gear);
  this->rightLiftUp = new pros::Motor(R1, gear, true);
  this->stateController = new BigboyMonobarLiftController(this->leftLiftUp, this->rightLiftUp);
  this->leftLiftUp->tare_position();
  this->rightLiftUp->tare_position();
}

TwoMotorMonobarLift::~TwoMotorMonobarLift(void)
{
  delete this->leftLiftUp;
  delete this->rightLiftUp;
}

void TwoMotorMonobarLift::obey(pros::Controller master)
{
  //this->stateController->obey(master);
  if(master.get_digital(DIGITAL_L1) == 1)
  {
    leftLiftUp->move_absolute(1200, 10);
    rightLiftUp->move_absolute(1200, 10);
  }
  else if(master.get_digital(DIGITAL_L2) == 1)
  {
    leftLiftUp->move_absolute(0, 30);
    rightLiftUp->move_absolute(0, 30);
  }
}

void TwoMotorMonobarLift::executeCommand(int * input)
{}
