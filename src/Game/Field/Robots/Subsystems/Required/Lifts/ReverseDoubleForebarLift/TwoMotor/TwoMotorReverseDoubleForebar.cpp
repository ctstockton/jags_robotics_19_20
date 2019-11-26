#include "TwoMotorReverseDoubleForebar.h"
#include "main.h"

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(void)
{}

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(int L1, int R1, pros::motor_gearset_e gear)
{
  this->leftLiftUp = new pros::Motor(L1, gear);
  this->rightLiftUp = new pros::Motor(R1, gear, true);
  this->stateController = new ReverseDoubleForebarController(leftLiftUp, rightLiftUp);
}

TwoMotorReverseDoubleForebar::~TwoMotorReverseDoubleForebar(void)
{
  delete this->leftLiftUp;
  delete this->rightLiftUp;
}

void TwoMotorReverseDoubleForebar::obey(pros::Controller master)
{
  this->stateController->obey(master);
}

void TwoMotorReverseDoubleForebar::executeCommand(int * input)
{}
