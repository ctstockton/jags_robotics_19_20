#include "main.h"
#include "TripleLeftTrack.h"

TripleLeftTrack::TripleLeftTrack(void)
{}

TripleLeftTrack::TripleLeftTrack(int L1, int L2, int L3, pros::motor_gearset_e gear)
{
  this->leftMotor1 = new pros::Motor (L1, gear);
  this->leftMotor2 = new pros::Motor (L2, gear);
  this->leftMotor3 = new pros::Motor (L3, gear);
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

void TripleLeftTrack::turnRight(int)
{
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void TripleLeftTrack::turnLeft(int)
{}

void TripleLeftTrack::driveForward(int)
{
//  leftTrack->driveForward();
//  rightTrack->driveForward();
}

void TripleLeftTrack::driveBackward(int)
{}

void TripleLeftTrack::orbitPointRight(int)
{}

void TripleLeftTrack::orbitPointLeft(int)
{}

void TripleLeftTrack::tarePosition(void)
{}
