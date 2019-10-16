#include "main.h"
#include "DoubleLeftTrack.h"

DoubleLeftTrack::DoubleLeftTrack(void)
{
  this->leftMotor1 = new pros::Motor (1);
  this->leftMotor2 = new pros::Motor (2);
}

DoubleLeftTrack::DoubleLeftTrack(int L1, int L2)
{
  this->leftMotor1 = new pros::Motor (L1);
  this->leftMotor2 = new pros::Motor (L2);
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
