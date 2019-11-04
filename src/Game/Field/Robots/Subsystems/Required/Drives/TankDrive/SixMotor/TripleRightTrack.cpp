#include "main.h"
#include "TripleRightTrack.h"

TripleRightTrack::TripleRightTrack(void)
{}

TripleRightTrack::TripleRightTrack(int R1, int R2, int R3, pros::motor_gearset_e gear)
{
  this->rightMotor1 = new pros::Motor (R1, gear, true);
  this->rightMotor2 = new pros::Motor (R2, gear, true);
  this->rightMotor3 = new pros::Motor (R3, gear, true);
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
