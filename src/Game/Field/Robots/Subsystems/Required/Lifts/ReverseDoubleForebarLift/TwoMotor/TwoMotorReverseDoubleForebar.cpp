#include "TwoMotorReverseDoubleForebar.h"
#include "main.h"

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(void)
{}

TwoMotorReverseDoubleForebar::TwoMotorReverseDoubleForebar(int L1, int R1, pros::motor_gearset_e gear)
{
  this->leftLiftUp = new pros::Motor(L1, gear);
  this->rightLiftUp = new pros::Motor(R1, gear, true);
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
    leftLiftUp->move(master.get_digital(DIGITAL_L1)*-75);
    leftLiftUp->tare_position();
    rightLiftUp->move(master.get_digital(DIGITAL_L1)*-75);
    rightLiftUp->tare_position();
  }
  else if(master.get_digital(DIGITAL_L2) == 1)
  {
    leftLiftUp->move(master.get_digital(DIGITAL_L2)*75);
    leftLiftUp->tare_position();
    rightLiftUp->move(master.get_digital(DIGITAL_L2)*75);
    rightLiftUp->tare_position();
  }
  else
  {
    leftLiftUp->move_absolute(0, 100);
    rightLiftUp->move_absolute(0, 100);
  }
}

void TwoMotorReverseDoubleForebar::scoringObey(pros::Controller master)
{
  obey(master);
}


void TwoMotorReverseDoubleForebar::executeCommand(int * input)
{}
