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

void DoubleRightTrack::turnRight(int)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
//  leftTrack->turnRight();
//  rightTrack->turnRight();
}

void DoubleRightTrack::turnLeft(int)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
}

void DoubleRightTrack::driveForward(int input)
{
  rightMotor1->move_absolute(input, 100);
  rightMotor2->move_absolute(input, 100);
}

void DoubleRightTrack::driveBackward(int input)
{
  //rightMotor1->move_absolute(-input, -100);
  //rightMotor2->move_absolute(-input, -100);
}

void DoubleRightTrack::orbitPointRight(int)
{
}

void DoubleRightTrack::orbitPointLeft(int)
{
}

void DoubleRightTrack::tarePosition(void)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
}

bool DoubleRightTrack::positionReached(int input)
{
  if (((rightMotor1->get_position() < input+5) && (rightMotor1->get_position() > input-5)) || ((rightMotor2->get_position() < input+5) && (rightMotor2->get_position() > input-5))) {
    return true;
  }
  else{
    return false;
  }
}
