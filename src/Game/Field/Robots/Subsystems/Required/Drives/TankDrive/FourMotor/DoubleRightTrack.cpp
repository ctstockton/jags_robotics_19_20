#include "main.h"
#include "DoubleRightTrack.h"

DoubleRightTrack::DoubleRightTrack(void)
{
  this->rightMotor1 = new pros::Motor (3, true);
  this->rightMotor2 = new pros::Motor (4, true);
}

DoubleRightTrack::DoubleRightTrack(int R1, int R2)
{
  this->rightMotor1 = new pros::Motor (R1, true);
  this->rightMotor2 = new pros::Motor (R2, true);
}

DoubleRightTrack::~DoubleRightTrack(void)
{
  delete this->rightMotor1;
  delete this->rightMotor2;
}

void DoubleRightTrack::obey(pros::Controller master)
{
  rightMotor1->move(master.get_analog(ANALOG_RIGHT_Y));
  rightMotor2->move(master.get_analog(ANALOG_RIGHT_Y));
}

void DoubleRightTrack::turnAroundRight(void)
{}

void DoubleRightTrack::driveForward(void)
{}
