#include "TwoMotorReverseDoubleForebar.h"
#include "main.h"

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(void)
{
  this->leftLiftUp = new pros::Motor(9);
  this->rightLiftUp = new pros::Motor(10, true);
}

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(int L1, int R1)
{
  this->leftLiftUp = new pros::Motor(L1);
  this->rightLiftUp = new pros::Motor(R1, true);
}

TwoMotorReverseDoubleForebar::~TwoMotorReverseDoubleForebar(void)
{
  delete this->leftLiftUp;
  delete this->rightLiftUp;
}

void TwoMotorReverseDoubleForebar::obey(pros::Controller master)
{
  if(master.get_digital(DIGITAL_L1) == 1)
  {
    leftLiftUp->move(master.get_digital(DIGITAL_L1)*127);
    rightLiftUp->move(master.get_digital(DIGITAL_L1)*127);
  }
  else if(master.get_digital(DIGITAL_L2) == 1)
  {
    leftLiftUp->move(master.get_digital(DIGITAL_L2)*-127);
    rightLiftUp->move(master.get_digital(DIGITAL_L2)*-127);
  }
  else
  {
    leftLiftUp->move(0);
    rightLiftUp->move(0);
  }
}
