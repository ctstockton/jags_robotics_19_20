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
  rightMotor1->tare_position();
  rightMotor2->tare_position();
  bool drive = 1;
  while (drive) {
   if(rightMotor1->get_position() > input){
     drive = 0;
   }
   rightMotor1->move(50);
   rightMotor2->move(50);

   // Continue running this loop as long as the motor is not within +-5 units of its goal
   pros::delay(2);
 }
}

void DoubleRightTrack::driveBackward(int)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
}

void DoubleRightTrack::orbitPointRight(int)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
}

void DoubleRightTrack::orbitPointLeft(int)
{
  rightMotor1->tare_position();
  rightMotor2->tare_position();
}
