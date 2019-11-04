#include "main.h"
#include "DoubleLeftTrack.h"

DoubleLeftTrack::DoubleLeftTrack(void)
{}

DoubleLeftTrack::DoubleLeftTrack(int L1, int L2, pros::motor_gearset_e gear)
{
  this->leftMotor1 = new pros::Motor (L1, gear);
  this->leftMotor2 = new pros::Motor (L2, gear);
}

DoubleLeftTrack::~DoubleLeftTrack(void)
{
  delete this->leftMotor1;
  delete this->leftMotor2;
}

void DoubleLeftTrack::obey(pros::Controller master)
{
  leftMotor1->move(master.get_analog(ANALOG_LEFT_Y));
  leftMotor2->move(master.get_analog(ANALOG_LEFT_Y));
}

void DoubleLeftTrack::turnAroundRight(void)
{}

void DoubleLeftTrack::driveForward(void)
{}
