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
  leftMotor1->tare_position();
  leftMotor2->tare_position();
  bool drive = 1;
  while (drive) {
    if(leftMotor1->get_position() > input){
      drive = 0;
    }
    leftMotor1->move(50);
    leftMotor2->move(50);

    // Continue running this loop as long as the motor is not within +-5 units of its goal
    pros::delay(2);
  }
}

void DoubleLeftTrack::driveBackward(int)
{
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
