#include "TwoMotorReverseDoubleForebar.h"
#include "main.h"

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(void)
{
  this->leftLiftUp = new pros::Motor(9);
  this->leftLiftDown = new pros::Motor(9, true);
  this->rightLiftUp = new pros::Motor(10, true);
  this->rightLiftDown = new pros::Motor(10);
}

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(int L1, int R1)
{
  this->leftLiftUp = new pros::Motor(L1);
  this->leftLiftDown = new pros::Motor(L1, true);
  this->rightLiftUp = new pros::Motor(R1, true);
  this->rightLiftDown = new pros::Motor(R1);
}

TwoMotorReverseDoubleForebar::~TwoMotorReverseDoubleForebar(void)
{
  delete this->leftLiftUp;
  delete this->leftLiftDown;
  delete this->rightLiftUp;
  delete this->rightLiftDown;
}

void TwoMotorReverseDoubleForebar::obey(pros::Controller master)
{
  leftLiftUp->move(master.get_digital(DIGITAL_L1));
  rightLiftUp->move(master.get_digital(DIGITAL_L1));
  leftLiftDown->move(master.get_digital(DIGITAL_L2));
  rightLiftDown->move(master.get_digital(DIGITAL_L2));
}
