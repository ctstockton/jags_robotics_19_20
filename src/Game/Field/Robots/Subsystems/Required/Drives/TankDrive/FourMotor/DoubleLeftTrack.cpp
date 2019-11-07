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

void DoubleLeftTrack::turnRight(int)
{
  leftMotor1->tare_position();
  leftMotor2->tare_position();
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void DoubleLeftTrack::turnLeft(int)
{
  leftMotor1->tare_position();
  leftMotor2->tare_position();
}

void DoubleLeftTrack::driveForward(int input)
{
  leftMotor1->move_absolute(input, 100);
  leftMotor2->move_absolute(input, 100);
}

void DoubleLeftTrack::driveBackward(int input)
{
  //leftMotor1->move_absolute(-input, -100);
  //leftMotor2->move_absolute(-input, -100);
}

void DoubleLeftTrack::orbitPointRight(int)
{
}

void DoubleLeftTrack::orbitPointLeft(int)
{
}

void DoubleLeftTrack::tarePosition(void)
{
  leftMotor1->tare_position();
  leftMotor2->tare_position();
}

bool DoubleLeftTrack::positionReached(int input)
{
  if (((leftMotor1->get_position() < input+5) && (leftMotor1->get_position() > input-5)) || ((leftMotor2->get_position() < input+5) && (leftMotor2->get_position() > input-5))) {
    return true;
  }
  else{
    return false;
  }
}
