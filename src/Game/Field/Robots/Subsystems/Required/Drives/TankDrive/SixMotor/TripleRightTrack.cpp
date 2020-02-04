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

void TripleRightTrack::scoringObey(pros::Controller master)
{
  obey(master);
}

void TripleRightTrack::turnRight(int)
{
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void TripleRightTrack::turnLeft(int)
{}

void TripleRightTrack::driveForward(int)
{
//  leftTrack->driveForward();
//  rightTrack->driveForward();
}

void TripleRightTrack::driveBackward(int)
{}

void TripleRightTrack::orbitPointRight(int)
{}

void TripleRightTrack::orbitPointLeft(int)
{}

void TripleRightTrack::tarePosition(void)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
  rightMotor3->tare_position();
}

bool TripleRightTrack::positionReached(int)
{
  return false;
}
