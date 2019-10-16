#include "main.h"
#include "TripleRightTrack.h"

TripleRightTrack::TripleRightTrack(void)
{
  this->rightMotor1 = new pros::Motor (4, true);
  this->rightMotor2 = new pros::Motor (5, true);
  this->rightMotor3 = new pros::Motor (6, true);
}

TripleRightTrack::TripleRightTrack(int R1, int R2, int R3)
{
  this->rightMotor1 = new pros::Motor (R1, true);
  this->rightMotor2 = new pros::Motor (R2, true);
  this->rightMotor3 = new pros::Motor (R3, true);
}

TripleRightTrack::~TripleRightTrack(void)
{
  delete this->rightMotor1;
  delete this->rightMotor2;
  delete this->rightMotor3;
}

void TripleRightTrack::obey(pros::Controller master)
{
  rightMotor1->move(master.get_analog(ANALOG_RIGHT_Y));
  rightMotor2->move(master.get_analog(ANALOG_RIGHT_Y));
  rightMotor3->move(master.get_analog(ANALOG_RIGHT_Y));
}

void TripleRightTrack::turnAroundRight(void)
{

}

void TripleRightTrack::driveForward(void)
{
  rightMotor1->move_absolute(100, 100);
}
