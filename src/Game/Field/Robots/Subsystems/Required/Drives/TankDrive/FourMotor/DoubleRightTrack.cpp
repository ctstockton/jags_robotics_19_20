#include "main.h"
#include "DoubleRightTrack.h"

DoubleRightTrack::DoubleRightTrack(void)
{}

DoubleRightTrack::DoubleRightTrack(int R1, int R2, pros::motor_gearset_e gear)
{
  this->rightMotor1 = new pros::Motor (R1, gear, true);
  this->rightMotor2 = new pros::Motor (R2, gear, true);
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
