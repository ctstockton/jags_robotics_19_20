#include "Ellie19.h"

Ellie19::Ellie19(void)
{
  this->driveSystem = new SixMotorDrive(LEFT_MOTOR_1, LEFT_MOTOR_2, LEFT_MOTOR_3, RIGHT_MOTOR_1, RIGHT_MOTOR_2, RIGHT_MOTOR_3);
}

Ellie19::~Ellie19(void)
{}

void Ellie19::obey(pros::Controller master)
{
  while (true) {
    driveSystem->obey(master);
    pros::delay(2);
  }
}
