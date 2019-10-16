#include "main.h"
#include "TripleLeftTrack.h"

TripleLeftTrack::TripleLeftTrack(void)
{
  this->leftMotor1 = new pros::Motor (1);
  this->leftMotor2 = new pros::Motor (2);
  this->leftMotor3 = new pros::Motor (3);
}

TripleLeftTrack::TripleLeftTrack(int L1, int L2, int L3)
{
  this->leftMotor1 = new pros::Motor (L1);
  this->leftMotor2 = new pros::Motor (L2);
  this->leftMotor3 = new pros::Motor (L3);
}

TripleLeftTrack::~TripleLeftTrack(void)
{
  delete this->leftMotor1;
  delete this->leftMotor2;
  delete this->leftMotor3;
}

void TripleLeftTrack::obey(pros::Controller master)
{
  leftMotor1->move(master.get_analog(ANALOG_LEFT_Y));
  leftMotor2->move(master.get_analog(ANALOG_LEFT_Y));
  leftMotor3->move(master.get_analog(ANALOG_LEFT_Y));
}

void TripleLeftTrack::turnAroundRight(void)
{

}

void TripleLeftTrack::driveForward(void)
{
  leftMotor1->move_absolute(100, 100);
}
